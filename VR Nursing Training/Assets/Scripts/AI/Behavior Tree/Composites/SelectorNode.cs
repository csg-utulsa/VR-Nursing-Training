using UnityEngine;
/// <summary>
/// This node loops through all children, returning Success the moment one of it's children return Success.
/// If a child node returns Failure, it will check the next child node until one returns Success. If all
/// child nodes return Failure then this node also returns Failure.
/// 
/// The Selector Node can also be used as an OR Gate.
/// </summary>
public class SelectorNode : CompositeNode
{
    [Tooltip("If true will invert order at runtime (will not appear inverted in editor tree view)")]
    public bool invertOrder = false;
    [Tooltip("If true will choose a random child to run")]
    public bool randomizeOrder = false;
    [Tooltip("If true will run until a child returns success or it runs out of children")]
    public bool pickTillSuccess = true;
    public string overrideName = "";

    private void Awake()
    {
        SetNodeName();
    }

    protected override void SetNodeName(string _name = "Selector Node")
    {
        //base.SetNodeName(_name);
        if (overrideName != "")
        {
            if (invertOrder) nodeName = $"[SEL_I] {overrideName}";
            else if (randomizeOrder) nodeName = $"[SEL_R] {overrideName}";
            else nodeName = $"[SEL] {overrideName}";
        }
        else if (invertOrder)
        {
            nodeName = "Inverted Selector";
        } 
        else if (randomizeOrder)
        {
            nodeName = "Random Selector";
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

        if (randomizeOrder) // O(n)
        {
            int n = children.Count;
            while (n > 1)
            {
                int k = Random.Range(0, n--);
                var temp = children[n];
                children[n] = children[k];
                children[k] = temp;
            }
        } 
        curChild = 0;
    }

    protected override void OnStop() { }

    
    protected override NodeState OnUpdate()
    {
        //We've reached the end of the children and no one was successful
        if (curChild >= children.Count)
        {
            return NodeState.Failure;
        }

        //Call the current child
        NodeBase child = children[curChild];

        //Check the child's status - failure means try a new child, Success means done.
        switch (child.Update())
        {
            case NodeState.Failure:
                if (_debugging) Debug.Break();
                if (!pickTillSuccess)
                {
                    return NodeState.Failure;
                } 
                else
                {
                    curChild++;
                }
                break;
 
            case NodeState.Success:
                if(_debugging) Debug.Break();
                return NodeState.Success;
        }
        //If this point as been hit - then the current child is still running
        return NodeState.Running;
    }

}
