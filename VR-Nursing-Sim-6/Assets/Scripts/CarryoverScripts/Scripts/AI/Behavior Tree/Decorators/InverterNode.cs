/// <summary>
/// This one is pretty self explanatory. It INVERTS whatever its child returns.
/// </summary>
public class InverterNode : DecoratorNode
{
    public string overrideName = "";

    private void Awake()
    {
        SetNodeName();
    }

    protected override void SetNodeName(string _name = "Inverter Node")
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
        if(child == null)
            return NodeState.Failure;

        // Check the status of the child node and invert if it is Failure or Success
        switch (child.Update())
        {
            case NodeState.Failure:
                return NodeState.Success;
            case NodeState.Success:
                return NodeState.Failure;
        }
        // Otherwise, it's still running or returning an Unknown code
        return NodeState.Running;
    }
}
