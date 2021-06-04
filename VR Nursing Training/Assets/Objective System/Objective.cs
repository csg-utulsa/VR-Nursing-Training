using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objective : MonoBehaviour
{
    
    public string description = "";
    public string reportSuccess = "";
    public string reportFail = "";
    public int weight = 0;
    public Objective[] previousList;

    public bool active = false;
    public bool skipped = false;
    public bool complete = false;
    private bool setActive;

    // Update is called once per frame
    void Update()
    {
        // Activate once previous tasks are all completed
        if (!active && !skipped && !complete)
        {
            setActive = true;
            for (int i = 0; i < previousList.Length; i++)
            {
                if (previousList[i] != null && !previousList[i].complete) // Won't activate if any previous tasks are incomplete
                {
                    setActive = false;
                    break;
                }
            }
            if (setActive)
            {
                active = true;
                Debug.Log(description); // DEBUG PURPOSES ONLY
            }
        }
    }

    public void completeObjective()
    {
        // Complete the objective and set to inactive
        if (!skipped)
        {
            complete = true;
            Debug.Log(reportSuccess); // DEBUG PURPOSES ONLY
        }
        active = false;

        // Skip previous incomplete objectives
        for (int i = 0; i < previousList.Length; i++)
        {
            if (previousList[i] != null && !previousList[i].complete)
            {
                previousList[i].skipObjective();
            }
        }
    }

    public void skipObjective()
    {
        // Set to inactive and skipped
        active = false;
        skipped = true;
        Debug.Log(reportFail); // DEBUG PURPOSES ONLY

        // Skip previous incomplete objectives
        for (int i = 0; i < previousList.Length; i++)
        {
            if (previousList[i] != null && !previousList[i].complete && !previousList[i].skipped)
            {
                previousList[i].skipObjective();
            }
        }
    }
}
