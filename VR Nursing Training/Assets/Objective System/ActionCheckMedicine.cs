using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCheckMedicine : ActionBase
{
    public string[] targetTypes;
    public bool notTarget = false; // If set to true, will activate if the pill's type is NOT in the targetType list

    private bool inList = false;

    public void CheckMedicine(string checkType)
    {
        for (int i = 0; i < targetTypes.Length; i++)
        {
            if (targetTypes[i] == checkType)
            {
                inList = true;
            }
        }
        if ((inList && !notTarget) || (!inList && notTarget))
        {
            performAction();
        }
    }
}
