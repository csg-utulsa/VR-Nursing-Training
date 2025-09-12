using UnityEngine;

public class RootNode : NodeBase
{
    [HideInInspector] public NodeBase child;
    public string overrideName = "";

    private void Awake()
    {
        SetNodeName();
    }
    
    protected override void SetNodeName(string _name = "Root Node")
    {
        //base.SetNodeName(_name);
        if (overrideName != "")
            nodeName = overrideName;
        else
            nodeName = _name;
    }

    public override void UpdateNodeObjectName()
    {
        SetNodeName();
        name = nodeName;
    }

    protected override void OnStart() { }

    protected override void OnStop() { }

    protected override NodeState OnUpdate()
    {
        return child != null ? child.Update() : NodeState.Failure;
    }

    public override NodeBase Clone()
    {
        RootNode node = Instantiate(this);
        if (node.child) { 

            node.child = child.Clone();
        }
        return node;
    }
}
