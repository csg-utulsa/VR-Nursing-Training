using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCountMedicine : ActionBase
{
    [Tooltip("Indicates whether patches must be marked to count for objectives")]
    [SerializeField] private bool requireMarkedPatch;
    private double currentDosage = 0;
    private List<GameObject> unmarkedPatches = new List<GameObject>();

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            if (scrpt.getMedicineName() == medicineType)
            {
                if (scrpt.getMedicineType() == MedicineTypes.Patch)
                {
                    // if marked patches aren't required or the patch is marked, count it
                    if (!requireMarkedPatch || other.gameObject.GetComponent<PatchObjectScript>().isMarked())
                    {
                        currentDosage += scrpt.getMedicineDosage();
                    }
                    // if marks are required but the patch was unmarked, add it to a list to monitor it
                    else if (requireMarkedPatch)
                    {
                        unmarkedPatches.Add(other.gameObject);
                    }
                }
                else
                {
                    currentDosage += scrpt.getMedicineDosage();
                }
            }
        }
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            if (scrpt.getMedicineType() == MedicineTypes.Patch && unmarkedPatches.Contains(other.gameObject))
            {
                if (other.GetComponent<PatchObjectScript>().isMarked())
                {
                    currentDosage += scrpt.getMedicineDosage();
                    unmarkedPatches.Remove(other.gameObject);
                }
            }
            if (scrpt.getMedicineType() == MedicineTypes.Liquid)
            {
                if (scrpt.getMedicineName() == medicineType)
                {
                    currentDosage = scrpt.getMedicineDosage();
                }
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            if (scrpt.getMedicineName() == medicineType)
            {
                if (scrpt.getMedicineType() == MedicineTypes.Patch)
                {
                    if (!requireMarkedPatch || other.GetComponent<PatchObjectScript>().isMarked())
                    {
                        currentDosage -= scrpt.getMedicineDosage();
                    }

                    if (unmarkedPatches.Contains(other.gameObject))
                    {
                        unmarkedPatches.Remove(other.gameObject);
                    }
                }
                else
                {
                    currentDosage -= scrpt.getMedicineDosage();
                }
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
