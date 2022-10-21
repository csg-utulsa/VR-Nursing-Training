using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Pickupable))]
public class MedicineData : MonoBehaviour
{
    public MedicineScriptableObject medicineScriptableObj;
    private float medCount;
    public string medicineName;

    private void Awake()
    {
        if (medicineScriptableObj.isRoot)
        {
            medicineName = medicineScriptableObj.medicineName;
        }
        medCount = medicineScriptableObj.dispenseCount;
}

    public string getMedicineName()
    {
        return medicineName;
    }

    public float getMedicineDosage()
    {
        return medicineScriptableObj.dosage;
    }

    public MedicineTypes getMedicineType()
    {
        return medicineScriptableObj.medicineType;
    }

    /// <summary>
    /// Returns null if object cannot dispense/is out of medicine OR Returns the instantiated gameobject
    /// </summary>
    /// <returns></returns>
    public GameObject dispenseObject(Vector3 pos, Quaternion rot)
    {
        if (!medicineScriptableObj.doDispense)
        {
            return null;
        }

        if (medCount > 0f)
        {
            var newMed = Instantiate(medicineScriptableObj.dispensedMedicine.prefab, pos, rot);

            medCount -= medicineScriptableObj.dispensedMedicine.dosage;

            newMed.GetComponent<MedicineData>().medicineName = medicineName;

            return newMed;
        } else if (!medicineScriptableObj.isRoot)
        {
            Destroy(gameObject);
            return null;
        }
        else
        {
            return null;
        }
    }
}
