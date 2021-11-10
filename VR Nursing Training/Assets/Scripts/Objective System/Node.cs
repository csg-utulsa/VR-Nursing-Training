using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node : MonoBehaviour
{
    // Fields used by all node types
    public Node[] previousList; // List containing previous nodes in the graph
    [HideInInspector] public bool active = false; // Indicates whether the node is active
    [HideInInspector] public bool complete = false; // Indicates whether the node is fully complete
    [HideInInspector] public bool saturated = false; // Indicates if the node is finished being active (i.e. all objectives are skipped or complete)
    [HideInInspector] public bool canContinue = false; // Indicates whether the next node(s) can be activated
    public bool canSkip = false; // Indicates whether the node can be skipped (only set in start, never updated)

    private bool setActive;
    private ScenarioStart scenarioParent = null;
    private bool inParentList = false;

    // Start is called before the first frame update
    void Start()
    {
        initializeNode();
    }

    // Update is called once per frame
    void Update()
    {
        // Set the scenario parent object
        if (previousList.Length > 0)
        {
            scenarioParent = previousList[0].scenarioParent;
        }
        
        // Add self to scenario parent's node list
        if (scenarioParent != null && !inParentList)
        {
            inParentList = true;
            scenarioParent.addNode(this);
        }

        // Check whether the node should be activated
        if (!active && !complete && !saturated)
        {
            if (previousList.Length > 0 && scenarioParent != null)
            {
                setActive = true;
            }
            for (int i = 0; i < previousList.Length; i++)
            {
                if (previousList[i] != null && !previousList[i].canContinue) // Won't activate if any previous tasks are incomplete
                {
                    setActive = false;
                    break;
                }
            }
            if (setActive)
            {
                active = true;
                activateNode();
            }
        }

        // Check conditions if the node is active
        if (active)
        {
            if (!canContinue)
            {
                checkCanContinue();
            }
            if (!complete && !saturated)
            {
                checkComplete();
                if (!complete)
                {
                    checkSaturated();
                }
            }
        }
    }

    // Methods used by all node types

    // Skips previous nodes in the graph
    public void skipPrevious() 
    {
        for (int i = 0; i < previousList.Length; i++)
        {
            if (previousList[i] != null && !previousList[i].complete && !previousList[i].saturated)
            {
                previousList[i].skipNode();
                previousList[i].skipPrevious();
            }
        }
    }

    // Sets the scenarioParent variable
    public void setScenarioParent(ScenarioStart parent)
    {
        scenarioParent = parent;
    }

    // Gets the scenarioParent variable
    public ScenarioStart getScenarioParent()
    {
        return scenarioParent;
    }


    // Methods to be customized for each node type:

    // Sets the parent node of each objective in the node, activates objectives if the node starts active, and sets canSkip based on the node's objectives
    public virtual void initializeNode()
    {

    }

    // Checks if the node can continue based on the node's conditions
    public virtual void checkCanContinue()
    {

    }

    // Checks if the node is complete based on the node's conditions
    public virtual void checkComplete()
    {

    }

    // Checks if the node is saturated based on the node's conditions
    public virtual void checkSaturated()
    {

    }

    // Updates the node to be completed
    public virtual void completeNode()
    {

    }

    // Updates the node to be skipped
    public virtual void skipNode()
    {

    }

    // Updates the node to be activated
    public virtual void activateNode()
    {

    }

    // Updates the whole node to be deactivated
    public virtual void deactivateNode()
    {

    }
    
    // Updates the node's objectives
    public virtual void updateObjectives()
    {

    }
}
