using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCountMedicine : ActionBase
{
    private double currentDosage = 0;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Pill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage += 1;
            }
        }
        if (other.CompareTag("HalfPill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage += 0.5;
            }
        }
        if (other.CompareTag("Patch"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage += 1;
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
                currentDosage = other.gameObject.GetComponent<LiquidObjectScript>().getDosage();
                Debug.Log("Cur Dosage: " + currentDosage);
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
                currentDosage -= 1;
            }
        }
        if (other.CompareTag("HalfPill"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage -= 0.5;
            }
        }
        if (other.CompareTag("Patch"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage -= 1;
            }
        }
        if (other.CompareTag("Liquid"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
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
