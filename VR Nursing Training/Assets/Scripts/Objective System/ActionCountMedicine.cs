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


        /*if (other.CompareTag("Pill"))
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
        }*/
        /*if (other.CompareTag("Patch"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                // if marked patches aren't required or the patch is marked, count it
                if (!requireMarkedPatch || other.gameObject.GetComponent<PatchObjectScript>().isMarked())
                {
                    currentDosage += 1;
                }

                // if marks are required but the patch was unmarked, add it to a list to monitor it
                else if (requireMarkedPatch)
                {
                    unmarkedPatches.Add(other.gameObject);
                }
            }
        }*/
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            // Do nothing if it is a liquid
            /*if (scrpt.getMedicineType() == MedicineTypes.LiquidContainer)
            {
                if (scrpt.getMedicineName() == medicineType)
                {
                    //currentDosage = scrpt.getMedicineDosage();
                }
            }*/
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

       /* else if (other.CompareTag("Liquid"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage = other.gameObject.GetComponent<LiquidObjectScript>().getDosage();
            }
        }*/

        /*if (other.CompareTag("Patch"))
        {
            // Count recently marked patches and remove them from the monitoring list
            for (int i = 0; i < unmarkedPatches.Count; i++)
            {
                if (unmarkedPatches[i].GetComponent<PatchObjectScript>().isMarked())
                {
                    currentDosage += 1;
                    unmarkedPatches.RemoveAt(i);
                }
            }
        }*/
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

        /*if (other.CompareTag("Pill"))
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
        }*/
        /*if (other.CompareTag("Patch") && (!requireMarkedPatch || other.GetComponent<PatchObjectScript>().isMarked()))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage -= 1;
            }

            // stop monitoring patches once they leave
            if (unmarkedPatches.Contains(other.gameObject))
            {
                unmarkedPatches.Remove(other.gameObject);
            }
        }*/
        /*if (other.CompareTag("Liquid"))
        {
            if (other.gameObject.GetComponent<InteractableScript>().getType() == medicineType)
            {
                currentDosage -= other.gameObject.GetComponent<LiquidObjectScript>().getDosage();
            }
        }*/
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
