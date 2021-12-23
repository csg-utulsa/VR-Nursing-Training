using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialCountMedicine : ActionBase
{
    private double pillCount = 0;
    private double liquidCount = 0;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Pill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                pillCount += 1;
            }
        }
        if (other.CompareTag("HalfPill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                pillCount += 0.5;
            }
        }
        if (other.CompareTag("Patch"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                pillCount += 1;
            }
        }
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Liquid"))
        {
            Debug.Log("Liquid Staying " + other.name);
            Debug.Log("Med Type: " + medicineType);
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                liquidCount = other.gameObject.GetComponent<LiquidObjectScript>().getDosage();
                Debug.Log("Cur Dosage: " + liquidCount);
                Debug.Log("Target Dosage: " + targetDosage);
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Pill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                pillCount -= 1;
            }
        }
        if (other.CompareTag("HalfPill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                pillCount -= 0.5;
            }
        }
        if (other.CompareTag("Liquid"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                liquidCount -= other.gameObject.GetComponent<LiquidObjectScript>().getDosage();
            }
        }
    }
    void Update()
    {
        performAction();
    }

    public double getCurrentPills()
    {
        return pillCount;
    }

    public double GetCurrentLiquid()
    {
        return liquidCount;
    }

    /*
    public double getCurrentDosage()
    {
        return currentDosage;
    }
    */
}
