using UnityEngine;

public abstract class DecoratorNode : NodeBase
{
    [HideInInspector] public NodeBase child;

    public override NodeBase Clone()
    {
        DecoratorNode node = Instantiate(this);
        if(node.child)
            node.child = child.Clone();
        return node;
    }
}
