using System;
using System.Collections;
using Unity.EditorCoroutines.Editor;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;

public class NodeView : UnityEditor.Experimental.GraphView.Node
{
    public Action<NodeView> OnNodeSelected;
    public NodeBase node;
    public Port input, output;

    private EditorCoroutine eraseRoutine;
    private readonly EditorWaitForSeconds eraseTimer = new EditorWaitForSeconds(0.25f);

    public NodeView(NodeBase node) : base("Assets/Editor/BehaviorTreeEditor/NodeView.uxml")
    {
        this.node = node;
        this.title = node.name;
        this.viewDataKey = node.guid;

        style.left = node.position.x;
        style.top = node.position.y;

        CreateInputPorts();
        CreateOutputPorts();
        SetupClasses();

        Label nameLabel = this.Q<Label>("nodeName");
        nameLabel.bindingPath = "nodeName";
        nameLabel.Bind(new SerializedObject(node));

        Label descriptionLabel = this.Q<Label>("description");
        descriptionLabel.bindingPath = "description";
        descriptionLabel.Bind(new SerializedObject(node));
    }

    private void SetupClasses()
    {
        if (node is ActionNode)
        {
            AddToClassList("action");
        }
        if (node is ConditionNode)
        {
            AddToClassList("condition");
        }
        else if (node is CompositeNode)
        {
            AddToClassList("composite");
        }
        else if (node is DecoratorNode)
        {
            AddToClassList("decorator");
        }
        else if (node is RootNode)
        {
            AddToClassList("root");
        }
        //else if (node is BehaviorNode)
        //{
        //    AddToClassList("behavior");
        //}
    }

    private void CreateInputPorts()
    {
        if(node is ActionNode)
        {
            input = InstantiatePort(Orientation.Vertical, Direction.Input, Port.Capacity.Multi, typeof(bool));
        }
        else if (node is ConditionNode)
        {
            input = InstantiatePort(Orientation.Vertical, Direction.Input, Port.Capacity.Multi, typeof(bool));
        }
        else if (node is CompositeNode)
        {
            input = InstantiatePort(Orientation.Vertical, Direction.Input, Port.Capacity.Multi, typeof(bool));
        }
        else if (node is DecoratorNode)
        {
            input = InstantiatePort(Orientation.Vertical, Direction.Input, Port.Capacity.Multi, typeof(bool));
        }
        else if (node is RootNode){ }
        //else if (node is BehaviorNode)
        //{
        //    input = InstantiatePort(Orientation.Vertical, Direction.Input, Port.Capacity.Multi, typeof(bool));
        //}

        if(input != null)
        {
            input.portName = "";
            input.style.flexDirection = FlexDirection.Column;
            input.transform.scale = Vector3.one;
            inputContainer.Add(input);
        }
    }

    private void CreateOutputPorts()
    {
        if (node is ActionNode) { }
        else if (node is ConditionNode)
        {
            output = InstantiatePort(Orientation.Vertical, Direction.Output, Port.Capacity.Single, typeof(bool));
        }
        else if (node is CompositeNode)
        {
            output = InstantiatePort(Orientation.Vertical, Direction.Output, Port.Capacity.Multi, typeof(bool));
        }
        else if (node is DecoratorNode)
        {
            output = InstantiatePort(Orientation.Vertical, Direction.Output, Port.Capacity.Single, typeof(bool));
        }
        else if (node is RootNode)
        {
            output = InstantiatePort(Orientation.Vertical, Direction.Output, Port.Capacity.Single, typeof(bool));
        }

        if (output != null)
        {
            output.portName = "";
            output.style.flexDirection = FlexDirection.ColumnReverse;
            output.transform.scale = Vector3.one;
            outputContainer.Add(output);
        }
    }

    public override void SetPosition(Rect newPos)
    {
        base.SetPosition(newPos);
        Undo.RecordObject(node, "Behavior Tree (Set Position)");
        node.position.x = newPos.xMin;
        node.position.y = newPos.yMin;
        EditorUtility.SetDirty(node);
    }

    public override void OnSelected()
    {
        base.OnSelected();
        if (OnNodeSelected != null)
            OnNodeSelected.Invoke(this);
    }

    public void SortChildren()
    {
        CompositeNode composite = node as CompositeNode;
        if(composite)
        {
            composite.children.Sort(SortByHorizontalPosition);
        }
    }

    private int SortByHorizontalPosition(NodeBase left, NodeBase right)
    {
        return (left.position.x < right.position.x ? -1 : 1);
    }

    public void UpdateState()
    {
        RemoveFromClassList("failure");
        RemoveFromClassList("running");
        RemoveFromClassList("success");

        if (Application.isPlaying)
        {
            switch (node.nodeState)
            {
                case NodeBase.NodeState.Running:
                    if(node.started)
                    {
                        AddToClassList("running");
                    }
                    break;
                case NodeBase.NodeState.Failure:
                    AddToClassList("failure");
                    break;
                case NodeBase.NodeState.Success:
                    AddToClassList("success");
                    break;
                default:
                    return;
            }

            if(eraseRoutine != null)
                EditorCoroutineUtility.StopCoroutine(eraseRoutine);

            eraseRoutine = EditorCoroutineUtility.StartCoroutine(EraseRoutine(), this);
        }
    }

    IEnumerator EraseRoutine()
    {
        yield return eraseTimer;
        EraseHighlight();
    }

    //Leaving empty to remove the "Disconnect All" option when right clicking on nodes.
    //This option appears because of the base.BuildContextualMenu function.
    public override void BuildContextualMenu(ContextualMenuPopulateEvent evt)
    {
        //if (node == null)
        //    return;

        base.BuildContextualMenu(evt);
        //evt.menu.AppendAction($"Erase Highlight", (a) => EraseHighlight());

        //evt.menu.AppendAction($"Highlight Yellow", (a) => HighlightNode(0));
        //evt.menu.AppendAction($"Highlight Red", (a) => HighlightNode(1));
        //evt.menu.AppendAction($"Highlight Green", (a) => HighlightNode(2));

    }

    private void EraseHighlight()
    {
        RemoveFromClassList("failure");
        RemoveFromClassList("running");
        RemoveFromClassList("success");
        node.nodeState = NodeBase.NodeState.Running;
    }

    //private void HighlightNode(int val)
    //{
    //    switch (val)
    //    {
    //        case 0:
    //            AddToClassList("running");
    //            node.nodeState = NodeBase.NodeState.Running;
    //            break;
    //        case 1:
    //            AddToClassList("failure");
    //            node.nodeState = NodeBase.NodeState.Failure;
    //            break;
    //        case 2:
    //            AddToClassList("success");
    //            node.nodeState = NodeBase.NodeState.Success;
    //            break;
    //    }
    //}
}
