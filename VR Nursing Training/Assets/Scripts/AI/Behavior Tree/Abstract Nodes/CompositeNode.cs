using System.Collections.Generic;
using UnityEngine;

public abstract class CompositeNode : NodeBase
{
    /*[HideInInspector]*/ public List<NodeBase> children = new List<NodeBase>();
    [HideInInspector] public int curChild = 0;

    public override NodeBase Clone()
    {
        CompositeNode node = Instantiate(this);
        node.children = children.ConvertAll(c => c.Clone());
        return node;
    }
}
