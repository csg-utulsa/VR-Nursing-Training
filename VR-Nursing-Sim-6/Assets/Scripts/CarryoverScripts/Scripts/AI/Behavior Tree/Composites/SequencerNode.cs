using UnityEngine;
/// <summary>
/// This node runs all child nodes until one of them returns Failure. If a child returns Failure then
/// this node returns Failure as well. If not this node returns either Success or Running
/// 
/// The Selector Node can also be used as an AND Gate.
/// </summary>
public class SequencerNode : CompositeNode
{
    public string overrideName = "";
    [Tooltip("If true will run every child regardless of success or failure")]
    public bool assumeSuccess = false;
    public bool invertOrder;
    private void Awake()
    {
        SetNodeName();
    }

    protected override void SetNodeName(string _name = "Sequencer Node")
    {
        //base.SetNodeName(_name);
        if (overrideName != "")
        {
            if (invertOrder)
            {
                if (assumeSuccess) 
                    nodeName = $"[SEQ_ALL_R] {overrideName}";
                else
                    nodeName = $"[SEQ_R] {overrideName}";
            }
            else
            {
                if (assumeSuccess)
                    nodeName = $"[SEQ_ALL] {overrideName}";
                else
                    nodeName = $"[SEQ] {overrideName}";
            }
        }
        else if (invertOrder)
        {
            nodeName = "Inverted Sequencer";
        }
        else
            nodeName = _name;
    }

    public override void UpdateNodeObjectName()
    {
        SetNodeName();
        name = nodeName;
    }

    protected override void OnStart() 
    { 
        if (invertOrder)
        {
            children.Reverse();
        }
        curChild = 0; 
    }

    protected override void OnStop() { }

    protected override NodeState OnUpdate()
    {
        NodeBase child = children[curChild];

        switch (child.Update())
        {
            case NodeState.Running:
                return NodeState.Running;
            case NodeState.Failure:
                if (_debugging) Debug.Break();
                if (assumeSuccess) { curChild++; break; }
                return NodeState.Failure;
            case NodeState.Success:
                if (_debugging) Debug.Break();
                curChild++;
                break;
        }
        

        return curChild >= children.Count ? NodeState.Success : NodeState.Running;
    }

}
