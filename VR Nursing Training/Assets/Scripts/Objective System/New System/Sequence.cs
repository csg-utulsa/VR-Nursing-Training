using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sequence : Node
{
    public Node StartNode;
    public Node[] EndNodes;

    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();

        foreach(Node endNode in EndNodes)
        {
            endNode.StateChanged += EndNodeUpdated;
        }
    }

    //Activate the start node when the sequence activates
    public override void NodeActivated()
    {
        base.NodeActivated();

        StartNode.SetCurrentState(NodeStates.Active);
    }

    //Complete the sequence as successful when the sequence completes
    private void EndNodeUpdated(Node endNode, NodeStates newState)
    {
        if(newState == NodeStates.Successful)
        {
            SetCurrentState(NodeStates.Successful);
        }
    }
}
