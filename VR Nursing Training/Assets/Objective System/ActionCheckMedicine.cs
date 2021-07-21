using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCheckMedicine : ActionBase
{
    public string[] targetTypes;
    public bool notTarget = false; // If set to true, will activate if the pill's type is NOT in the targetType list
    public bool onCollision = false; // If set to true, will check any medicine it collides with

    private bool inList = false;

    private void OnTriggerEnter(Collider other)
    {
        if ((onCollision) && (other.CompareTag("Pill") || other.CompareTag("HalfPill") || other.CompareTag("Patch")))
        {
            CheckMedicine(other.gameObject.GetComponent<InteractableScript>().getType());
        }
    }

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
