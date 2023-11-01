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

    // Fill minigame parameters
    [Header("Fill Minigame")]
    public float pourRate = 5;
    public float maxFill = 30;
    public Transform fillIndicatorBar;
    public float currentFill = 0;

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
                    
                    // Activate pour event (check medicine and make fill bar visible)
                    onPour.Invoke(scrpt.getMedicineName());

                    // Increment fill if in non-VR mode
                    if (!XRRigSingleton.xrs.getVRActive())
                    {
                        setMedicine(currentFill + pourRate);
                        //AdjustFillBar(currentFill + pourRate);
                    }
                }
            }
        }
    }

    public void OnTriggerStay(Collider other)
    {
        // ignore if the colliding object is not medicine
        if (!other.TryGetComponent<MedicineData>(out MedicineData medData)) return;
        if (requiredType == medData.getMedicineName()) // requireType[i]
        {
            if (debugging) Debug.Log("Filling with: " + other.name);

            // Continuous fill for VR mode
            if (XRRigSingleton.xrs.getVRActive())
            {
                setMedicine(currentFill + pourRate * Time.deltaTime);
                //AdjustFillBar(currentFill + pourRate * Time.deltaTime);
            }
        }
    }

    public void AdjustFillBar(float fillAmount)
    {
        currentFill = Mathf.Clamp(fillAmount, 0, maxFill);

        Vector3 newScale = fillIndicatorBar.localScale;
        newScale.y = currentFill / maxFill;
        fillIndicatorBar.localScale = newScale;
    }

    public void setMedicine(float dosage)
    {
        if (liquidContainer.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            /*GameObject newObj = scrpt.dispenseObject(emptyCup.transform.position, emptyCup.transform.rotation);

            if (newObj != null)
            {
                newObj.GetComponent<MedicineData>().setMedicineDosage(dosage);
            }
            
            Destroy(emptyCup);*/
            scrpt.setMedicineDosage(dosage);
            AdjustFillBar(dosage);
        }
    }
}
