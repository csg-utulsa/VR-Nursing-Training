using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LiquidTriggerScript : Interactable
{
    // SET FROM OBJECTIVE SCRIPTS
    public string requiredType;
    //public static GameObject measureCanvas;

    // ActionCheckMedicine.CheckMedicine Pills,Patch,Liquid
    // Set Screen Question Active
    public UnityEvent<string> onPour;


    //public GameObject liquidFull;
    //public GameObject liquidEmpty;
    // Object Trying to Pour
    private GameObject liquidContainer;

    //private bool correctType;
    private bool complete = false;
    //private string liquidType;
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
                    //correctType = true;
                    // }
                    //}
                    //if (requiredType.Length == 0 || correctType)
                    //{

                    
                    // Display Question
                    onPour.Invoke(scrpt.getMedicineName());
                    //parentLiquid.GetComponent<InteractableScript>().setType(liquidType);
                }
            }
            //liquidType = scrpt.getMedicineName();
            //correctType = false;
            //for (int i = 0; i < requiredType.Length; i++)
            //{
            
        }

        /*
        if (other.CompareTag("LiquidContainer") && !complete)
        {
            liquidType = other.GetComponent<MedicineData>().getMedicineName();
            correctType = false;
            for (int i = 0; i < requiredType.Length; i++)
            {
                if (requiredType[i] == liquidType)
                {
                    correctType = true;
                }
            }
            if (requiredType.Length == 0 || correctType)
            {
                
                Debug.Log("Liquid Doing Thing");
                onPour.Invoke(liquidType);
                parentLiquid.GetComponent<InteractableScript>().setType(liquidType);
            }
            */
        //}
       
    }
    /*public void setComplete(bool comp)
    {
        complete = comp;
        Destroy(this);
    }*/

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
