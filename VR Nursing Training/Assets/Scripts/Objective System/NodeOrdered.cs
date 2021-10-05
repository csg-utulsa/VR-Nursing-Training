using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeOrdered : Node
{
    public Objective[] objectives;
    private int currentObjective = 0;
    private int lastComplete = 0;

    // Sets the parent node of each objective in the node, activates objectives if the node starts active, and sets canSkip based on the node's objectives
    public override void initializeNode()
    {
        canSkip = true;
        for (int i = 0; i < objectives.Length; i++)
        {
            if (objectives[i] != null)
            {
                objectives[i].setParent(this);
                if (active && currentObjective >= i)
                {
                    objectives[i].active = true;
                    if (objectives[i].canSkip)
                    {
                        currentObjective += 1;
                    }
                    Debug.Log(objectives[i].description); // DEBUG ONLY
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
            if (objectives[i] != null && currentObjective >= i)
            {
                objectives[i].active = true;
                if (objectives[i].canSkip)
                {
                    currentObjective += 1;
                }
                Debug.Log(objectives[i].description); // DEBUG ONLY
            }
        }
    }

    // Updates the whole node to be deactivated
    public override void deactivateNode()
    {
        active = false;
        for (int i = 0; i < objectives.Length; i++)
        {
            objectives[i].active = false;
        }
    }

    // Updates the node's objectives
    public override void updateObjectives()
    {
        skipPrevious();
        for (int i = 0; i < objectives.Length; i++) // Find last completed node
        {
            if (objectives[i].complete)
            {
                lastComplete = i;
                currentObjective = i + 1;
            }
        }
        for (int i = 0; i < lastComplete; i++) // Skip and previous nodes
        {
            objectives[i].skipObjective();
        }
        for (int i = currentObjective; i < objectives.Length; i++)
        {
            if (currentObjective >= i)
            {
                objectives[i].active = true;
                if (objectives[i].canSkip)
                {
                    currentObjective += 1;
                }
                Debug.Log(objectives[i].description); // DEBUG ONLY
            }
        }
    }
}
