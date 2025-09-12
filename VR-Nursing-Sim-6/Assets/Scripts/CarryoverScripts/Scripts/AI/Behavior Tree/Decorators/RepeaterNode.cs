using UnityEngine;
/// <summary>
/// This node runs its child repeatedly, forever. The only exception is if its child is ever NULL.
/// </summary>
public class RepeaterNode : DecoratorNode
{
    public string overrideName = "";
    private float timeRepeatEntered;
    public static float timeEntered;
    private void Awake()
    {
        SetNodeName();
    }

    protected override void SetNodeName(string _name = "Repeater Node")
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

    protected override void OnStart() { timeRepeatEntered = Time.time; }

    protected override void OnStop() { }

    protected override NodeState OnUpdate()
    {
        if (timeEntered != timeRepeatEntered)
        {
            timeEntered = timeRepeatEntered;
        }
        if (child != null)
        {
            child.Update();
            return NodeState.Running;
        }
        else
            return NodeState.Failure;
    }
}
