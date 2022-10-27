using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Script for creating medicine objects based on a provided medicineScriptableObj
/// </summary>
[RequireComponent(typeof(Pickupable))]
public class MedicineData : MonoBehaviour
{
    /// <summary>
    /// Reference to Medicine Scriptable Object
    /// </summary>
    public MedicineScriptableObject medicineScriptableObj;

    /// <summary>
    /// Local count for amount of medication in a container
    /// </summary>
    private float medCount;

    /// <summary>
    /// Local dosage of this medicine for dynamic medicines i.e. Liquid
    /// </summary>
    /// 
    /// <remarks>
    ///  ONLY used by dynamic medicine all others use medicineScriptableObj.dosage
    /// </remarks>
    private float dosage;

    /// <summary>
    /// Local name of this medicine i.e. "DIGOXIN", "IBUPROFEN", etc.
    /// </summary>
    /// 
    /// <remarks>
    /// Set in Awake if it is a container | 
    /// Set inside dispenseObject for all others
    /// </remarks>
    private string medicineName;

    /// <summary>
    /// Set starting variables
    /// </summary>
    private void Awake()
    {
        // If medicine is a container
        if (medicineScriptableObj.isRoot) 
        {
            // Assign local medicine name (for reference by children)
            medicineName = medicineScriptableObj.medicineName;
        }
        // Assign local count for containers i.e. 30 for PillContainers, 1 for FullPills
        medCount = medicineScriptableObj.dispenseCount;
}

    /// <summary>
    /// Getter for medicine name
    /// </summary>
    /// <returns>name of this medicine i.e. "DIGOXIN", "IBUPROFEN", etc.</returns>
    public string getMedicineName()
    {
        return medicineName;
    }

    /// <summary>
    /// Getter for local medicine dosage
    /// </summary>
    /// <returns>Dosage of this medicine</returns>
    public float getMedicineDosage()
    {
        // Return local dosage for dynamic medicines else return global dosage
        if (medicineScriptableObj.isDynamic)
        {
            return dosage;
        } 
        else
        {
            return medicineScriptableObj.dosage;
        }
        
    }

    /// <summary>
    /// Getter for medicine type
    /// </summary>
    /// <returns>type of this medicine i.e. "FullPill, "Patch", "PillContainer", etc.</returns>
    public MedicineTypes getMedicineType()
    {
        return medicineScriptableObj.medicineType;
    }

    /// <summary>
    /// Dispenses medicine for this obj
    /// </summary>
    /// <param name="pos">position</param>
    /// <param name="rot">rotation</param>
    /// <returns> GameObject that is dispensed OR null if object is unable to dispense</returns>
    public GameObject dispenseObject(Vector3 pos, Quaternion rot)
    {
        // If medicine is not a container i.e. HalfPill,Liquid,Patch,etc.
        if (!medicineScriptableObj.doDispense)
        {
            return null;
        }

        // If container has not dispensed all its medicine
        if (medCount > 0f)
        {
            // Dispensed Object
            var newMed = Instantiate(medicineScriptableObj.dispensedMedicine.prefab, pos, rot);

            // Decrease med count
            medCount -= 1;

            // Set new medicine's name i.e. DIGOXIN, IBUPROFEN etc.
            newMed.GetComponent<MedicineData>().medicineName = medicineName;

            // If container is out of medicine and if it is not a original container i.e. FullPill
            if (medCount <= 0f && !medicineScriptableObj.isRoot)
            {
                // Delete container (typically FullPill after dispensed HalfPills)
                Destroy(gameObject);
            }

            // Return new medicine gameobject
            return newMed;
        } 
        
        // Container is out of medication
        return null;
    }

    /// <summary>
    /// Used to set dosage for ONLY Dynamic Medication
    /// </summary>
    /// <param name="dos"> medicine dosage </param>
    /// <returns> True if set was successfull | False if set was unsuccessfull</returns>
    public bool setMedicineDosage(float dos)
    {
        // If medicine has dynamic dosage
        if (medicineScriptableObj.isDynamic)
        {
            // Set local dosage
            dosage = dos;
            return true;
        } 
        else
        {
            return false;
        }
    }
}
