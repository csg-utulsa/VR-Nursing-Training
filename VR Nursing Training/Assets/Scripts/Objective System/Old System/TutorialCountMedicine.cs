/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialCountMedicine : ActionBase
{
    public double pillCount = 0;
    public double liquidCount = 0;

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Tutorial Cart has enter");
        if (other.CompareTag("Pill"))
        {
            pillCount += 1;
        }
        if (other.CompareTag("HalfPill"))
        {
            pillCount += 0.5;
        }
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Liquid"))
        {
            Debug.Log("Liquid Staying " + other.name);
            Debug.Log("Med Type: " + medicineType);
            if (other.GetComponent<MedicineData>().getMedicineName() == medicineType)
            {
                liquidCount = other.GetComponent<MedicineData>().getMedicineDosage();
                Debug.Log("Cur Dosage: " + liquidCount);
                Debug.Log("Target Dosage: " + targetDosage);
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Pill"))
        {
            pillCount -= 1;
        }
        if (other.CompareTag("HalfPill"))
        {
            pillCount -= 0.5;
        }
        if (other.CompareTag("Liquid"))
        {
            if (other.GetComponent<MedicineData>().getMedicineName() == medicineType)
            {
                liquidCount -= other.GetComponent<MedicineData>().getMedicineDosage();
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
//}