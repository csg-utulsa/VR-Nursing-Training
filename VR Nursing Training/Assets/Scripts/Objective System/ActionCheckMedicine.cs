using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCheckMedicine : ActionBase
{
    public bool notTarget = false; // If set to true, will activate if the pill's type is NOT in the targetType list
    public bool onCollision = false; // If set to true, will check any medicine it collides with

    private void OnTriggerEnter(Collider other)
    {
        if ((onCollision) && (other.CompareTag("Pill") || other.CompareTag("HalfPill") || other.CompareTag("Patch") || other.CompareTag("Liquid")))
        {
            Debug.Log("On Cart Trigger" + other.name);
            CheckMedicine(other.gameObject.GetComponent<InteractableScript>().getType());
        }
    }

    public void CheckMedicine(string checkType)
    {
        if ((!notTarget && checkType == medicineType) || (notTarget && checkType != medicineType))
        {
            performAction();
        }
    }
}
