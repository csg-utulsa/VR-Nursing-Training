using System.Collections.Generic;
using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

[CreateAssetMenu(menuName = "Behavior Tree/Behavior Tree", order = 0)]
public class BehaviorTree : ScriptableObject
{
    public NodeBase rootNode;
    public NodeBase.NodeState treeState = NodeBase.NodeState.Running;
    public List<NodeBase> nodes = new List<NodeBase>();
    public Blackboard blackboard = null; // was new(); -- Related to Awake() creation below


    private void Awake() // Logan Patrick 5.23.2022 With Jakob's OK - Allows extended behavior trees to prevent blackboard creation.
    {
        //blackboard = new();
        treeInit();
    }

    public virtual void treeInit()
    {
        blackboard = new Blackboard();
    }


    public void ResetState()
    {
        Traverse(rootNode, (n) =>
        {
            n.nodeState = NodeBase.NodeState.Running;
            n.started = false;

            // if composite node set curchild to 0
            if (n.GetType().IsSubclassOf(typeof(CompositeNode)))
            {
                ((CompositeNode)n).curChild = 0;
            }
        });
    }

    public NodeBase.NodeState Update()
    {
        if(rootNode.nodeState == NodeBase.NodeState.Running)
            treeState = rootNode.Update();
        return treeState;
    }

    public List<NodeBase> GetChildren(NodeBase parent)
    {
        List<NodeBase> children = new List<NodeBase>();

        RootNode root = parent as RootNode;
        if (root && root.child != null)
        {
            children.Add(root.child);
        }

        CompositeNode composite = parent as CompositeNode;
        if (composite)
        {
            //The RemoveInvalidChildren function should be used in this function for any node types that have more than one child.
            composite.children = RemoveInvalidChildren(composite.children);
            return composite.children;
        }

        ConditionNode condition = parent as ConditionNode;
        if (condition && condition.child != null)
        {
            children.Add(condition.child);
        }

        DecoratorNode decorator = parent as DecoratorNode;
        if (decorator && decorator.child != null)
        {
            children.Add(decorator.child);
        }

        return children;
    }

    /// <summary>
    /// This function is used to remove invalid children from a nodes children list.
    /// Invalid children are either duplicates or null. This function should be used
    /// when getting children for any node types that have more than one child.
    /// </summary>
    /// <param name="children">List of children that will be checked for invalids.</param>
    /// <returns></returns>
    private List<NodeBase> RemoveInvalidChildren(List<NodeBase> children)
    {
        //debug variable to see how many times this nested for loop runs.
        //int iterations = 0;

        //going in reverse incase I need to remove a child, I wont go out of bounds.
        for (int i = children.Count - 1; i >= 0; i--)
        {
            //iterations++;
            NodeBase child = children[i];
            //remove null children
            if (child == null)
            {
                children.RemoveAt(i);
                continue;
            }

            //iterate through and remove duplicate children
            for (int j = i - 1; j >= 0; j--)
            {
                //iterations++;
                NodeBase child2 = children[j];
                //remove null children
                if (child2 == null)
                {
                    children.RemoveAt(j);
                    i--;
                    continue;
                }

                if (child2 != null && child.guid == child2.guid)
                {
                    children.RemoveAt(j);
                    i--;
                }
            }

        }
        //DebugC.Log($"Iterations: {iterations}");
        return children;
    }

    public void Traverse(NodeBase node, System.Action<NodeBase> visitor)
    {
        if (node)
        {
            visitor.Invoke(node);
            List<NodeBase> children = GetChildren(node);
            children.ForEach((n) => Traverse(n, visitor));
        }
    }

    public virtual BehaviorTree Clone()
    {
        BehaviorTree tree = Instantiate(this);
        tree.blackboard = this.blackboard; //Prevents issues that come from the blackboard from being overwritten
        tree.rootNode = tree.rootNode.Clone();
        tree.nodes = new List<NodeBase>();
        Traverse(tree.rootNode, (n) =>
        {
            tree.nodes.Add(n);
        });

        return tree;
    }
    
    /* 
    //Disabled: This creates a reference to all old nodes, not copies.
    public BehaviorTree_AI UpgradeToAI()
    {
        //BehaviorTree_AI tree2 = Instantiate(new BehaviorTree_AI());
        BehaviorTree_AI tree2 = (BehaviorTree_AI)ScriptableObject.CreateInstance(typeof(BehaviorTree_AI));
        tree2.rootNode = (NodeBase)ScriptableObject.CreateInstance<RootNode>();
        
        tree2.nodes = new List<NodeBase>();

        Traverse(tree2.rootNode, (n) =>
        {
            tree2.nodes.Add(n);
        });

        return tree2;
    }
    */

    //public void Bind()
    public virtual void Bind()//EnemyAI Eai) // Logan Patrick 5.23.2022 - Made Bind virtual to extend it's behavior for BehaviorTree_AI
    {
        //blackboard.SetRadius(GameManager.Instance.GetXRRadius());
        //blackboard.SetAI(Eai);
        Traverse(rootNode, node =>
        {
            node.blackboard = blackboard;
        });
    }

        /*
    public void AI_AssignBlackboard(Blackboard_Animator BB) // Logan Patrick 5.23.2022 - To allow backwards compatability with old behavior trees
    {
        blackboard = BB;
    }
        */

    #region Editor Compatibility
#if UNITY_EDITOR
    public NodeBase CreateNode(System.Type type)
    {
        NodeBase node = ScriptableObject.CreateInstance(type) as NodeBase;
        node.name = type.Name;
        node.guid = GUID.Generate().ToString();

        Undo.RecordObject(this, "Behavior Tree (CreateNode)");
        nodes.Add(node);

        if(!Application.isPlaying)
            AssetDatabase.AddObjectToAsset(node, this);

        Undo.RegisterCreatedObjectUndo(node, "Behavior Tree (CreateNode)");

        AssetDatabase.SaveAssets();
        return node;
    }

    public void DeleteNode(NodeBase node)
    {
        Undo.RecordObject(this, "Behavior Tree (DeleteNode)");
        nodes.Remove(node);

        //AssetDatabase.RemoveObjectFromAsset(node);
        Undo.DestroyObjectImmediate(node);

        AssetDatabase.SaveAssets();
    }

    public void AddChild(NodeBase parent, NodeBase child)
    {
        RootNode root = parent as RootNode;
        if(root)
        {
            Undo.RecordObject(root, "Behavior Tree (AddChild)");
            root.child = child;
            EditorUtility.SetDirty(root);
        }

        CompositeNode composite = parent as CompositeNode;
        if(composite)
        {
            Undo.RecordObject(composite, "Behavior Tree (AddChild)");
            composite.children.Add(child);
            EditorUtility.SetDirty(composite);
        }

        ConditionNode condition = parent as ConditionNode;
        if(condition)
        {
            Undo.RecordObject(condition, "Behavior Tree (AddChild)");
            condition.child = child;
            EditorUtility.SetDirty(condition);
        }

        DecoratorNode decorator = parent as DecoratorNode;
        if(decorator)
        {
            Undo.RecordObject(decorator, "Behavior Tree (AddChild)");
            decorator.child = child;
            EditorUtility.SetDirty(decorator);
        }
    }

    public void RemoveChild(NodeBase parent, NodeBase child)
    {
        RootNode root = parent as RootNode;
        if (root)
        {
            Undo.RecordObject(root, "Behavior Tree (RemoveChild)");
            root.child = null;
            EditorUtility.SetDirty(root);
        }

        CompositeNode composite = parent as CompositeNode;
        if (composite)
        {
            Undo.RecordObject(composite, "Behavior Tree (RemoveChild)");
            composite.children.Remove(child);
            EditorUtility.SetDirty(composite);
        }

        ConditionNode condition = parent as ConditionNode;
        if (condition)
        {
            Undo.RecordObject(condition, "Behavior Tree (RemoveChild)");
            condition.child = null;
            EditorUtility.SetDirty(condition);
        }

        DecoratorNode decorator = parent as DecoratorNode;
        if (decorator)
        {
            Undo.RecordObject(decorator, "Behavior Tree (RemoveChild)");
            decorator.child = null;
            EditorUtility.SetDirty(decorator);
        }
    }
    #endif
#endregion Editor Compatibility
}
