using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeSingle : Node
{
    public Objective objective = null;

    // Sets the parent node of each objective in the node, activates objectives if the node starts active, and sets canSkip based on the node's objectives
    public override void initializeNode()
    {
        objective.setParent(this);
        if (active)
        {
            objective.active = true;
        }
        if (objective.canSkip)
        {
            canSkip = true;
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
            canContinue = objective.canContinue;
        }
    }

    // Checks if the node is complete based on the node's conditions
    public override void checkComplete()
    {
        if (objective.complete)
        {
            completeNode();
        }
    }

    // Checks if the node is saturated based on the node's conditions
    public override void checkSaturated()
    {
        if (objective.skipped || objective.complete)
        {
            saturated = true;
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
        objective.skipObjective();
        saturated = true;
        canContinue = true;
        active = false;
        skipPrevious();
        Debug.Log("Node Skipped"); // DEBUG ONLY
    }

    // Updates the node to be activated
    public override void activateNode()
    {
        active = true;
        objective.active = true;
        Debug.Log("Node Activated"); // DEBUG ONLY
        Debug.Log(objective.description); // DEBUG ONLY
    }

    // Updates the whole node to be deactivated
    public override void deactivateNode()
    {
        objective.active = false;
    }

    // Updates the node's objectives
    public override void updateObjectives()
    {
        // Nothing is needed because this only calls when the objective updates itself
    }
}
