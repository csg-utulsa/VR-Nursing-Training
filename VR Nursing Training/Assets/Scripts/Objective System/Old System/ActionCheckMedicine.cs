/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCheckMedicine : ActionBase
{
    public bool notTarget = false; // If set to true, will activate if the pill's type is NOT in the targetType list
    public bool onCollision = false; // If set to true, will check any medicine it collides with


    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt)) //|| other.CompareTag("Liquid"))
        {
            if ((onCollision) || MedicineScriptableObject.validFinalMedicine.HasFlag(scrpt.getMedicineType())) //&& (other.CompareTag("Liquid"))
            {
                Debug.Log("On Cart Trigger" + other.name);
                CheckMedicine(scrpt.getMedicineName());
            }
        }
        
    }

    public void CheckMedicine(string checkType)
    {
        if ((!notTarget && checkType == medicineType) || (notTarget && (checkType.CompareTo(medicineType) != 0)))
        {
            performAction();
        }
    }
}
*/