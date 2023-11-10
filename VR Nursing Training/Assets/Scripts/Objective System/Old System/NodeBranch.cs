/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeBranch : Node
{
    public Node[] nodes;

    // Sets the parent node of each objective in the node, activates objectives if the node starts active, and sets canSkip based on the node's objectives
    public override void initializeNode()
    {
        canSkip = true;
        for (int i = 0; i < nodes.Length; i++)
        {
            if (nodes[i] != null)
            {
                if (active)
                {
                    nodes[i].activateNode();
                }
                if (!nodes[i].canSkip)
                {
                    canSkip = false;
                }
            }
        }
    }

    // Checks if the node can continue based on the node's conditions
    public override void checkCanContinue()
    {
        if (canSkip)
        {
            canContinue = true;
        }
        else
        {
            canContinue = true;
            for (int i = 0; i < nodes.Length; i++)
            {
                if (!nodes[i].canContinue)
                {
                    canContinue = false;
                }
            }
        }
    }

    // Checks if the node is complete based on the node's conditions
    public override void checkComplete()
    {
        for (int i = 0; i < nodes.Length; i++)
        {
            if (nodes[i].complete)
            {
                complete = true;
                completeNode();
            }
        }
    }

    // Checks if the node is saturated based on the node's conditions
    public override void checkSaturated()
    {
        saturated = true;
        for (int i = 0; i < nodes.Length; i++)
        {
            if (!nodes[i].complete && !nodes[i].saturated)
            {
                saturated = false;
            }
        }
    }

    // Updates the node to be completed
    public override void completeNode()
    {
        complete = true;
        saturated = true;
        canContinue = true;
        active = false;
        for (int i = 0; i < nodes.Length; i++)
        {
            nodes[i].deactivateNode();
        }
        skipPrevious();
        Debug.Log("Node Complete"); // DEBUG ONLY
    }

    // Updates the node to be skipped
    public override void skipNode()
    {
        saturated = true;
        canContinue = true;
        active = false;
        for (int i = 0; i < nodes.Length; i++)
        {
            nodes[i].skipNode();
            nodes[i].deactivateNode();
        }
        skipPrevious();
        Debug.Log("Node Skipped"); // DEBUG ONLY
    }

    // Updates the node to be activated
    public override void activateNode()
    {
        Debug.Log("Node Activated"); // DEBUG ONLY
        for (int i = 0; i < nodes.Length; i++)
        {
            nodes[i].activateNode();
        }
    }

    public override void deactivateNode()
    {
        active = false;
        for (int i = 0; i < nodes.Length; i++)
        {
            nodes[i].deactivateNode();
        }
    }

    // Updates the node's objectives
    public override void updateObjectives()
    {
        skipPrevious();
        // No objectives need to be updated because one objective's completion has no bearing over the others in an unordered node
    }
}
*/