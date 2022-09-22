using UnityEngine;

public abstract class ConditionNode : NodeBase
{
    [HideInInspector] public NodeBase child;

    /// <summary>Controls if the child should be ran when the condition is true or false.</summary>
    public bool runChildOnTrueFalse = true;
    public override NodeBase Clone()
    {
        ConditionNode node = Instantiate(this);
        if(node.child)
            node.child = child.Clone();
        return node;
    }
    protected override NodeState OnUpdateInit()
    {
        if (child != null && child.started)
        {
            return child.Update();
        }
        return OnUpdate();
    }

}
