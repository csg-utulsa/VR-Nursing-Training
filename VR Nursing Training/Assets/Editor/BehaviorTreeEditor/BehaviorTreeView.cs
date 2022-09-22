using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using UnityEngine.UIElements;

public class BehaviorTreeView : GraphView
{
    public Action<NodeView> OnNodeSelected;
    public new class UxmlFactory : UxmlFactory<BehaviorTreeView, GraphView.UxmlTraits> { }
    public BehaviorTree tree { get; private set; }

    public BTClipboard clipboard = new BTClipboard();

    Vector2 mousePos;

    public BehaviorTreeView()
    {
        Insert(0, new GridBackground());

        this.AddManipulator(new ContentZoomer());
        this.AddManipulator(new ContentDragger());
        this.AddManipulator(new SelectionDragger());
        this.AddManipulator(new RectangleSelector());

        var styleSheet = AssetDatabase.LoadAssetAtPath<StyleSheet>("Assets/Editor/BehaviorTreeEditor/BehaviorTreeEditor.uss");
        styleSheets.Add(styleSheet);

        serializeGraphElements += CopyAndSerializeGraphElements;
        unserializeAndPaste += UnserializeAndPasteGraphElements;
        canPasteSerializedData += CanUnserializeAndPaste;

        Undo.undoRedoPerformed += OnUndoRedo;
        RegisterCallback<MouseMoveEvent>(x => { mousePos = x.localMousePosition; });
    }

    private void OnUndoRedo()
    {
        PopulateView(tree);
        AssetDatabase.SaveAssets();
    }

    NodeView FindNodeView(NodeBase node)
    {
        return GetNodeByGuid(node.guid) as NodeView;
    }

    internal void PopulateView(BehaviorTree tree)
    {
        if (tree == null)
            return;

        this.tree = tree;

        graphViewChanged -= OnGraphViewChanged;
        DeleteElements(graphElements.ToList());
        graphViewChanged += OnGraphViewChanged;

        if (tree.rootNode == null)
        {
            CreateRootNode();
            return;
        }

        //Create the node views
        tree.nodes.ForEach(n => CreateNodeView(n));

        //create edges
        CreateEdges(tree.nodes);
    }

    public override List<Port> GetCompatiblePorts(Port startPort, NodeAdapter nodeAdapter)
    {
        return ports.ToList().Where(endPort =>
        endPort.direction != startPort.direction &&
        endPort.node != startPort.node).ToList();
    }

    private GraphViewChange OnGraphViewChanged(GraphViewChange graphViewChange)
    {
        if(graphViewChange.elementsToRemove != null)
        {
            graphViewChange.elementsToRemove.ForEach(elem => {
                if (elem is NodeView nodeView)
                {
                    tree.DeleteNode(nodeView.node);
                }

                if (elem is Edge edge)
                {
                    NodeView parentView = edge.output.node as NodeView;
                    NodeView childView = edge.input.node as NodeView;
                    tree.RemoveChild(parentView.node, childView.node);
                    parentView.SortChildren();
                }
            });
        }

        if (graphViewChange.edgesToCreate != null)
        {
            graphViewChange.edgesToCreate.ForEach(edge => {
                NodeView parentView = edge.output.node as NodeView;
                NodeView childView = edge.input.node as NodeView;
                tree.AddChild(parentView.node, childView.node);
                parentView.SortChildren();
            });
        }

        if (graphViewChange.movedElements != null)
            nodes.ForEach((n) =>
            {
                NodeView view = n as NodeView;
                view.SortChildren();
            });

        return graphViewChange;
    }

    public override void BuildContextualMenu(ContextualMenuPopulateEvent evt)
    {
        if (tree == null)
            return;

        //evt.menu.AppendAction($"Update Node Names", (a) => BehaviorTreeEditor.UpdateNodeObjNames());
        evt.menu.InsertAction(0, $"Update Node Names", (a) => BehaviorTreeEditor.UpdateNodeObjNames());

        if (tree.rootNode == null)
            evt.menu.AppendAction($"Create Root Node", (a) => CreateRootNode());

        var types = TypeCache.GetTypesDerivedFrom<ActionNode>();
        Appender(evt, types, 1);
        types = TypeCache.GetTypesDerivedFrom<ConditionNode>();
        Appender(evt, types, 2);
        types = TypeCache.GetTypesDerivedFrom<CompositeNode>();
        Appender(evt, types, 3);
        types = TypeCache.GetTypesDerivedFrom<DecoratorNode>();
        Appender(evt, types, 4);
        //types = TypeCache.GetTypesDerivedFrom<BehaviorNode>();
        //Appender(evt, types, 5);

        base.BuildContextualMenu(evt);
    }

    private void Appender(ContextualMenuPopulateEvent evt, TypeCache.TypeCollection types, int index)
    {
        Vector2 mousePos = GetMousePos();
        foreach (var type in types)
        {
            if (type.Name.Contains("BB_"))
                //evt.menu.AppendAction($"{type.BaseType.Name}/AI Core/{type.Name}", (a) => CreateNode(type, mousePos));
                evt.menu.InsertAction(index, $"{type.BaseType.Name}/AI Core/{type.Name}", (a) => CreateNode(type, mousePos));
            else if (type.Name.Contains("Animator_"))
                //evt.menu.AppendAction($"{type.BaseType.Name}/AI Core/{type.Name}", (a) => CreateNode(type, mousePos));
                evt.menu.InsertAction(index, $"{type.BaseType.Name}/Animator/{type.Name}", (a) => CreateNode(type, mousePos));
            else if (type.Name.Contains("PunchWarning_"))
                //evt.menu.AppendAction($"{type.BaseType.Name}/AI Core/{type.Name}", (a) => CreateNode(type, mousePos));
                evt.menu.InsertAction(index, $"{type.BaseType.Name}/Punch Warning/{type.Name}", (a) => CreateNode(type, mousePos));
            else
                evt.menu.AppendAction($"{type.BaseType.Name}/{type.Name}", (a) => CreateNode(type, mousePos));
        }
    }

    void CreateRootNode()
    {
        tree.rootNode = tree.CreateNode(typeof(RootNode)) as RootNode;
        EditorUtility.SetDirty(tree);
        AssetDatabase.SaveAssets();

        PopulateView(tree);
    }

    void CreateNode(System.Type type, Vector2 mousePos)
    {
        NodeBase node = tree.CreateNode(type);
        node.position = mousePos;
        CreateNodeView(node);
    }

    NodeBase CreateNodeAndReturnRef(System.Type type, Vector2 mousePos)
    {
        NodeBase node = tree.CreateNode(type);
        node.position = mousePos;
        CreateNodeView(node);
        return node;
    }

    void CreateNodeView(NodeBase node)
    {
        if(node != null)
        {
            if(DoesNodeNeedConverting(node))
            {
                NodeConverter(node);
            }
            else
            {
                //NodeView nodeView = new(node);
                NodeView nodeView = new NodeView(node);
                nodeView.OnNodeSelected = OnNodeSelected;
                AddElement(nodeView);
            }
        }
        else
            tree.nodes.Remove(node);
    }

    /// <summary>
    /// This function will check all nodes being rendered to the behavior tree view and see if any need to be converted.
    /// If so it will send the node off to be converted and return the newly converted node to be rendered.
    /// </summary>
    /// <param name="node">The node that needs to be checked for conversion.</param>
    /// <returns></returns>
    private bool DoesNodeNeedConverting(NodeBase node)
    {
        //switch (node)
        //{
        //    case SetMoveChangeRate:
        //    case PlayAttackComboNode:
        //    case AttackNode:
        //    case AnimatorSpeedNode:
        //    case AnimatorSnapMovementNode:
        //    case AnimatorMovementRange:
        //    case AnimatorMovementNode:
        //    case AnimatorBooleanNode:
        //    case AnimationTriggerNode:
        //        return true;
        //}
        //Node doesnt need converting so return false;
        return false;
    }

    /// <summary>This function is used to convert nodes that have had their scripts duplicated and renamed. This will
    /// change all nodes from the old script to the new script without breaking the tree they were in.</summary>
    /// <param name="oldNode">The old node that needs to be converted</param>
    /// <returns></returns>
    private NodeBase NodeConverter(NodeBase oldNode)
    {
        NodeBase newNode;

        //set the type specific variables for the new node
        switch (oldNode)
        {
            //case SetMoveChangeRate n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_SetMoveChangeRate), n.position);
            //    (newNode as Animator_SetMoveChangeRate).changeRate = n.changeRate;
            //    break;

            //case PlayAttackComboNode n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_PlayAttackComboNode), n.position);
            //    (newNode as Animator_PlayAttackComboNode).overrideName = n.overrideName;
            //    break;

            //case AttackNode n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_AttackNode), n.position);
            //    (newNode as Animator_AttackNode).punch = n.punch;
            //    break;

            //case AnimatorSpeedNode n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_SpeedNode), n.position);
            //    (newNode as Animator_SpeedNode).speed = n.speed;
            //    break;

            //case AnimatorSnapMovementNode n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_SnapMovementNode), n.position);
            //    (newNode as Animator_SnapMovementNode).forwardAxis = n.forwardAxis;
            //    (newNode as Animator_SnapMovementNode).rightAxis = n.rightAxis;
            //    break;

            //case AnimatorMovementRange n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_MovementRange), n.position);
            //    (newNode as Animator_MovementRange).forwardMinimum = n.forwardMinimum;
            //    (newNode as Animator_MovementRange).forwardMaximum = n.forwardMaximum;
            //    (newNode as Animator_MovementRange).rightMinimum = n.rightMinimum;
            //    (newNode as Animator_MovementRange).rightMaximum = n.rightMaximum;
            //    break;

            //case AnimatorMovementNode n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_MovementNode), n.position);
            //    (newNode as Animator_MovementNode).forwardAxis = n.forwardAxis;
            //    (newNode as Animator_MovementNode).rightAxis = n.rightAxis;
            //    break;

            //case AnimatorBooleanNode n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_BooleanNode), n.position);
            //    (newNode as Animator_BooleanNode)._booleanLabel = n._booleanLabel;
            //    (newNode as Animator_BooleanNode)._booleanValue = n._booleanValue;
            //    (newNode as Animator_BooleanNode)._invertOnExit = n._invertOnExit;
            //    break;

            //case AnimationTriggerNode n:
            //    newNode = CreateNodeAndReturnRef(typeof(Animator_TriggerNode), n.position);
            //    (newNode as Animator_TriggerNode)._triggerLabel = n._triggerLabel;
            //    break;

            default:
                newNode = oldNode;
                Debug.LogError($"Failed to convert node {oldNode.nodeName} from type '{oldNode.GetType()}' to '{newNode.GetType()}'");
                break;
        }

        newNode.description = oldNode.description;
        newNode.UpdateNodeObjectName();
        tree.DeleteNode(oldNode);
        return newNode;
    }

    public void UpdateNodeState()
    {
        nodes.ForEach(n =>
        {
            NodeView view = n as NodeView;
            view.UpdateState();
        });
    }

    /// <summary>Function ran when the Copy or Cut events (ctr + C or X) is triggered. The return string is passed to the Paste event as the 'data' argument</summary>
    /// <returns></returns>
    private string CopyAndSerializeGraphElements(IEnumerable<GraphElement> elements)
    {
        CopyOperation();
        //I opted for a manually created clipboard instead of using this return string so I could safely store a node copy
        //without fear of overwritting it by copying something else like text to the computers internal clipboard.
        return "<b>Why are you trying to paste nodes into a text field?</b>";
    }

    private void CopyOperation()
    {
        //Clear entries at start of new copy instead of end of paste so I can paste multiple times.
        clipboard.GetEntries().Clear();
        clipboard.SetMousePosAtCopy(GetMousePos());
        //DebugC.Log($"CopyAndSerializeGraphElements: {elements.ToList().Count}");

        foreach (ISelectable elem in selection)
        {
            //DebugC.Log($"\'{elem.name}\'\t\'{elem.GetType()}\'\t\'{elem.title}\'");
            if (elem is NodeView nodeView)
            {
                NodeBase node = nodeView.node;

                //DebugC.Log($"\'{node.name}\'\t\'{node.GetType()}\'");
                Type nodeType = node.GetType();

                //DebugC.Log($"\'{node.name}\'\t\'{nodeType}\'");

                //RootNodes shouldnt be copied
                if (nodeType == typeof(RootNode)) { continue; }

                FieldInfo[] fields = nodeType.GetFields();

                //ClipboardEntry clip = new(node.name, nodeType, node);
                ClipboardEntry clip = new ClipboardEntry(node.name, nodeType, node);
                foreach (FieldInfo f in fields)
                {
                    var value = f.GetValue(node);
                    if (!(f.Name.Equals("nodeState") || f.Name.Equals("started") || f.Name.Equals("guid") || f.Name.Equals("blackboard") ||
                         f.Name.Equals("curChild")))
                    {
                        //DebugC.Log($"Field Type: {f.FieldType} | Field Name: {f.Name} | Field Value: {value}");
                        clip.AddField(f.Name, value);
                    }
                }
                clipboard.AddEntry(clip);
            }
        }
    }

    private void UnserializeAndPasteGraphElements(string operationName, string data)
    {
        //DebugC.Log("UnserializeAndPasteGraphElements");
        //DebugC.Log($"Op Name: {operationName}\n{data}");

        if (operationName == "Paste" || operationName == "Duplicate")
        {
            clipboard.SetMouseCopyPasteOffset(GetMousePos());

            //Keep a list of new nodes so we can check the children after all node creation is done.
            List<NodeBase> newNodes = new List<NodeBase>();
            //Keep a list of old nodes so we can check the children after all node creation is done.
            List<NodeBase> oldNodes = new List<NodeBase>();
            foreach(ClipboardEntry entry in clipboard.GetEntries())
            {
                //position
                string manualKeyEntry = "position";
                Vector2 oldPos = (Vector2)entry.valueDict[manualKeyEntry];
                //entry.RemoveKeyAndValues(manualKeyEntry);

                if(clipboard.GetOffset() == Vector2.zero)
                {
                    clipboard.SetMousePosAtCopy(oldPos);
                    clipboard.SetMouseCopyPasteOffset(GetMousePos());
                }

                Vector2 newPos = oldPos + clipboard.GetOffset();

                //node creation
                var newNode = CreateNodeAndReturnRef(entry.nodeType, newPos);
                newNodes.Add(newNode);
                oldNodes.Add(entry.oldNode);

                //node name
                manualKeyEntry = "nodeName";
                string nName = (string)entry.valueDict[manualKeyEntry];
                newNode.nodeName = nName;
                //entry.RemoveKeyAndValues(manualKeyEntry);

                FieldInfo[] fields = entry.nodeType.GetFields();

                foreach (FieldInfo f in fields)
                {
                    if(entry.valueDict.ContainsKey(f.Name))
                    {
                        if(f.Name.Equals("children"))
                        {
                            List<NodeBase> children = new List<NodeBase>();
                            children = (List<NodeBase>)entry.valueDict[f.Name];
                            foreach (NodeBase child in children)
                                (newNode as CompositeNode).children.Add(child);
                            continue;
                        }
                        var value = entry.valueDict[f.Name];
                        f.SetValue(newNode, value);
                        //entry.RemoveKeyAndValues(f.Name);
                    }
                }
            }

            //Have every node check children of all other nodes
            foreach (NodeBase node in newNodes)
            {
                Type nodeType = node.GetType();
                if (nodeType.IsSubclassOf(typeof(CompositeNode)))
                {
                    CompositeNode comp = (CompositeNode)node;
                    for (int i = comp.children.Count - 1; i >= 0; i--)
                    {
                        //If child is found in oldNodes then set the new child node to the current child reference
                        if (!oldNodes.Contains(comp.children[i]))
                        {
                            comp.children.RemoveAt(i);
                            continue;
                        }

                        int index = oldNodes.IndexOf(comp.children[i]);
                        comp.children[i] = newNodes[index];
                    }
                }
                else if (nodeType.IsSubclassOf(typeof(ConditionNode)))
                {
                    ConditionNode cond = (ConditionNode)node;
                    if (!oldNodes.Contains(cond.child))
                    {
                        cond.child = null;
                    }
                    else
                    {
                        int index = oldNodes.IndexOf(cond.child);
                        cond.child = newNodes[index];
                    }
                }
                else if (nodeType.IsSubclassOf(typeof(DecoratorNode)))
                {
                    DecoratorNode dec = (DecoratorNode)node;
                    if (!oldNodes.Contains(dec.child))
                    {
                        dec.child = null;
                    }
                    else
                    {
                        int index = oldNodes.IndexOf(dec.child);
                        dec.child = newNodes[index];
                    }
                }
            }

            //Create edges for the new nodes
            CreateEdges(newNodes);
        }
        else
        {
            Debug.LogWarning($"OTHER Operation {operationName}");//\n{data}");
        }
    }

    //If the clipboard entries are greater than 0 then allow pasting.
    private bool CanUnserializeAndPaste(string data)
    {
        if (clipboard.GetEntries().Count > 0)
            return true;
        return false;
    }

    private Vector2 GetMousePos()
    {
        return viewTransform.matrix.inverse.MultiplyPoint(mousePos);
    }

    private void CreateEdges(List<NodeBase> nodes)
    {
        nodes.ForEach(n => {
            List<NodeBase> children = tree.GetChildren(n);
            children.ForEach(c => {
                NodeView parentView = FindNodeView(n);
                NodeView childView = FindNodeView(c);

                Edge edge = parentView.output.ConnectTo(childView.input);
                AddElement(edge);
            });
        });
    }
}
