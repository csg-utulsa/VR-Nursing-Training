/// <summary>
/// Debug condition used to artificially control the direction of the behavior tree logic.
/// </summary>
public class ConditionTrueFalse : ConditionNode
{
    public bool trueOrFalse = false;

    private void Awake()
    {
        SetNodeName();
    }

    protected override void SetNodeName(string _name = "")
    {
        name = nodeName = trueOrFalse ? "TRUE" : "FALSE";
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
        SetNodeName();

        bool isConditionalTrue = trueOrFalse;

        //If child is null act like old condition node and return the result of the conditional check
        if (child == null)
            return isConditionalTrue ? NodeState.Success : NodeState.Failure;

        return child.Update();
    }
}
