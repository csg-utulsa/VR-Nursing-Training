using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeUnordered : Node
{
    public Objective[] objectives;

    // Sets the parent node of each objective in the node, activates objectives if the node starts active, and sets canSkip based on the node's objectives
    public override void initializeNode()
    {
        canSkip = true;
        for (int i = 0; i < objectives.Length; i++)
        {
            if (objectives[i] != null)
            {
                objectives[i].setParent(this);
                if (active)
                {
                    objectives[i].active = true;
                }
                if (!objectives[i].canSkip)
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
            for (int i = 0; i < objectives.Length; i++)
            {
                if (!objectives[i].canContinue)
                {
                    canContinue = false;
                }
            }
        }
    }

    // Checks if the node is complete based on the node's conditions
    public override void checkComplete()
    {
        complete = true;
        for (int i = 0; i < objectives.Length; i++)
        {
            if (!objectives[i].complete)
            {
                complete = false;
            }
        }
        if (complete)
        {
            completeNode();
        }
    }

    // Checks if the node is saturated based on the node's conditions
    public override void checkSaturated()
    {
        saturated = true;
        for (int i = 0; i < objectives.Length; i++)
        {
            if (!objectives[i].complete && !objectives[i].skipped)
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
        skipPrevious();
        Debug.Log("Node Complete"); // DEBUG ONLY
    }

    // Updates the node to be skipped
    public override void skipNode()
    {
        for (int i = 0; i < objectives.Length; i++)
        {
            objectives[i].skipObjective();
        }
        saturated = true;
        canContinue = true;
        active = false;
        skipPrevious();
        Debug.Log("Node Skipped"); // DEBUG ONLY
    }

    // Updates the node to be activated
    public override void activateNode()
    {
        Debug.Log("Node Activated"); // DEBUG ONLY
        for (int i = 0; i < objectives.Length; i++)
        {
            objectives[i].active = true;
            Debug.Log(objectives[i].description); // DEBUG ONLY
        }
    }

    // Updates the node's objectives
    public override void updateObjectives()
    {
        skipPrevious();
        // No objectives need to be updated because one objective's completion has no bearing over the others in an unordered node
    }
}
