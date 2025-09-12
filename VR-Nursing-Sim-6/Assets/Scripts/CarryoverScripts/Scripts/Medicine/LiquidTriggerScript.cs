using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LiquidTriggerScript : Interactable
{
    // SET FROM OBJECTIVE SCRIPTS
    public string requiredType;

    // ActionCheckMedicine.CheckMedicine Pills,Patch,Liquid
    // Set Screen Question Active
    public UnityEvent<string> onPour;

    // Object Trying to Pour
    private GameObject liquidContainer;

    private GameObject emptyCup;
    private void Start()
    {
        emptyCup = transform.parent.gameObject;
    }

    public override void Interact(GameObject other)
    {
        if (debugging) Debug.Log("Interacting... " + other.name);
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt)) //&& !complete)
        {
            if (scrpt.getMedicineType() == MedicineTypes.LiquidContainer)
            {
                if (requiredType == scrpt.getMedicineName()) // requireType[i]
                {
                    if (debugging) Debug.Log("Pouring: " + other.name);

                    liquidContainer = other.gameObject;
                    
                    // Display Question
                    onPour.Invoke(scrpt.getMedicineName());
                }
            }
        }
    }

    public void setMedicine(float dosage)
    {
        if (liquidContainer.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            GameObject newObj = scrpt.dispenseObject(emptyCup.transform.position, emptyCup.transform.rotation);

            if (newObj != null)
            {
                newObj.GetComponent<MedicineData>().setMedicineDosage(dosage);
            }
            
            Destroy(emptyCup);
        }
    }
}
