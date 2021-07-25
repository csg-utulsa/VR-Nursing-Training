using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCountMedicine : ActionBase
{
    public string targetType;
    public double targetDosage;

    private double currentDosage = 0;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Pill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage += 1;
            }
        }
        if (other.CompareTag("HalfPill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage += 0.5;
            }
        }
        if (other.CompareTag("Patch"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage += 1;
            }
        }
        if (other.CompareTag("Liquid"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage += other.gameObject.GetComponent<LiquidObjectScript>().getDosage();
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Pill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage -= 1;
            }
        }
        if (other.CompareTag("HalfPill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage -= 0.5;
            }
        }
        if (other.CompareTag("Patch"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage -= 1;
            }
        }
        if (other.CompareTag("Liquid"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == targetType)
            {
                currentDosage -= other.gameObject.GetComponent<LiquidObjectScript>().getDosage();
            }
        }
    }
    void Update()
    {
        if (currentDosage == targetDosage)
        {
            performAction();
        }
    }

    public double getCurrentDosage()
    {
        return currentDosage;
    }
}
