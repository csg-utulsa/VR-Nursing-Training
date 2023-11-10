using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroupNode : Node
{
    public Node[] SubNodes;

    [Tooltip("A negative value indicates all sub nodes must be completed." +
        "\nA value above the number of sub nodes indicates all sub nodes must be completed")]
    public int numToComplete = -1;

    private int numNodesSuccessful;
    private int nodesFinished;

    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();

        if (numToComplete < 0 || numToComplete > SubNodes.Length)
        {
            numToComplete = SubNodes.Length;
        }

        foreach(Node node in SubNodes)
        {
            node.StateChanged += SubNodeStateChanged;
        }
    }

    public override void NodeActivated()
    {
        foreach (Node subNode in SubNodes)
        {
            subNode.SetCurrentState(NodeStates.Active);
        }
    }

    public virtual void SubNodeStateChanged(Node subNode, NodeStates newState)
    {
        //if it is reaching a final state
        if (newState != NodeStates.Active && newState != NodeStates.Inactive)
        {
            nodesFinished++;

            if (newState == NodeStates.Successful)
            {
                numNodesSuccessful++;
            }
        }

        //Complete the group once enough nodes are completed
        if (numNodesSuccessful >= numToComplete)
        {
            SetCurrentState(NodeStates.Successful);

            foreach(Node node in SubNodes)
            {
                if(!node.Completed)
                {
                    node.SetCurrentState(NodeStates.Skipped);
                }
            }
        }
        //Fail the node if all nodes are finished but not enough succeeded
        else if (nodesFinished == SubNodes.Length)
        {
            SetCurrentState(NodeStates.Failed);
        }
    }
}
