using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionBase : MonoBehaviour
{
    public Objective myObjective;
    public bool failAction = false;

    // Set objective to complete if the action is performed
    public void performAction()
    {
        if (myObjective != null && !myObjective.complete && myObjective.active)
        {
            if (failAction)
            {
                myObjective.failObjective();
            }
            else
            {
                myObjective.completeObjective();
            }
        }
    }
}
