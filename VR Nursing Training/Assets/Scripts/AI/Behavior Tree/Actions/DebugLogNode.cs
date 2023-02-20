using UnityEngine;

/// <summary>Its a node for logging info to the debug console, what more do you need...</summary>
public class DebugLogNode : ActionNode
{
    public string message;
    public bool returnTrue = true;
    public string overrideName = "";

    private void Awake()
    {
        SetNodeName();
    }

    protected override void SetNodeName(string _name = "Debug Log Node")
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

    protected override void OnStart(){ }

    protected override void OnStop(){ }

    protected override NodeState OnUpdate()
    {
        Debug.Log($"OnUpdate: {message}");

        return returnTrue ? NodeState.Success : NodeState.Failure;
    }
}
