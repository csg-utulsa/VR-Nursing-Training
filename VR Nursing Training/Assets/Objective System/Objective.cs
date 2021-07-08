using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objective : MonoBehaviour
{

    public string description = "";
    public string reportSuccess = "";
    public string reportFail = "";
    public int weight = 0;

    public int strikeCount = 0;
    private int strikes = 0;
    public bool failed = false;

    public bool active = false;
    public bool skipped = false;
    public bool complete = false;

    public bool canSkip = false;
    public bool canContinue;

    private Node parentNode = null;

    // Start is called before the first frame update
    void Start()
    {
        canContinue = canSkip;
    }

    public void completeObjective()
    {
        // Only complete the objective if it is active
        if (active)
        {
            // Complete the objective and set to inactive
            if (!skipped)
            {
                complete = true;
                canContinue = true;
            }
            active = false;

            // Tell the node to update it's objectives and skip previous nodes
            parentNode.updateObjectives();
            parentNode.skipPrevious();

            Debug.Log(reportSuccess); // DEBUG ONLY
        }
    }

    public void skipObjective()
    {
        // Set to inactive
        active = false;

        // Set to skipped if the node wasn't already complete
        if (!complete)
        {
            skipped = true;
            Debug.Log(reportFail); // DEBUG ONLY
        }
    }

    public void failObjective()
    {
        strikes += 1;
        if (strikes >= strikeCount && strikeCount != 0)
        {
            failed = true;
        }
    }

    public void setParent(Node node)
    {
        parentNode = node;
    }
}
