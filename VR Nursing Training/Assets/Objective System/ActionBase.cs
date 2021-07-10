using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionBase : MonoBehaviour
{
    public Objective myObjective;

    // Set objective to complete if the action is performed
    public void performAction()
    {
        if (myObjective != null && !myObjective.complete)
        {
            myObjective.completeObjective();
        }
    }
}
