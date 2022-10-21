using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

#if UNITY_EDITOR
using UnityEditor;
#endif

[CreateAssetMenu(fileName = "Medicine", menuName = "ScriptableObjects/Medicine", order = 1)]
public class MedicineScriptableObject : ScriptableObject
{
    /// <summary>
    /// Actual name of the Medication
    /// Ex. DIGOXIN, IBUPROFEN
    /// </summary>
    [HideInInspector] public string medicineName;

    /// <summary>
    /// Model for the medication
    /// </summary>
    [HideInInspector] public GameObject model;

    /// <summary>
    /// Scriptable object that this medicine will dispense
    /// </summary>
    [HideInInspector] public MedicineScriptableObject dispensedMedicine;

    /// <summary>
    /// If set to false will not allow this medicine to interact with dispensers
    /// </summary>
    private bool doDispense = false;

    /// <summary>
    /// Object dosage of a single instance of this object
    /// </summary>
    [HideInInspector] public float dosage = -1;

    /// <summary>
    /// Total amount of medicine this object can dispense
    /// </summary>
    [HideInInspector] public int dispenseCount = 0;

    /// <summary>
    /// Enum for the different types of medicine
    /// </summary>
    public enum MedicineTypes 
    { 
        Fake = 1, // 0 No Dispense
        PillContainer = 1 << 1, // 1
        FullPill = 1 << 2, // 2
        HalfPill = 1 << 3, // 3 No Dispense
        PatchContainer = 1 << 4, // 4
        Patch = 1 << 5, // 5 No Dispense
        LiquidContainer = 1 << 6 // 6 No Dispense
    }
    /// <summary>
    /// Medicine type for this gameObject
    /// </summary>
    public MedicineTypes medicineType;

    /// <summary>
    /// All medicine types that can dispense an object
    /// </summary>
    [HideInInspector] public MedicineTypes validMedicineContainers = MedicineTypes.PillContainer | MedicineTypes.FullPill | MedicineTypes.PatchContainer;
    [HideInInspector] public MedicineTypes validFinalMedicine = MedicineTypes.FullPill | MedicineTypes.HalfPill | MedicineTypes.Patch;

    /// <summary>
    /// Sets default values for specified type
    /// </summary>
    private void OnAwake()
    {
        if (validMedicineContainers.HasFlag(medicineType))
        {
            doDispense = true;
        }
    }

    /// <summary>
    /// Getter for if this medication can dispense medication
    /// </summary>
    /// <returns></returns>
    public bool getDoDispense()
    {
        return doDispense;
    }

}

#if UNITY_EDITOR
[CustomEditor(typeof(MedicineScriptableObject))]
public class MedicineCustomEditor: Editor
{
    private int fieldSpace = 5;
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        MedicineScriptableObject obj = target as MedicineScriptableObject;

        obj.model = EditorGUILayout.ObjectField("Medicine Model", obj.model, typeof(GameObject), false) as GameObject;
        // Assert that the medicine has a model
        if (obj.model == null)
        {
            EditorGUILayout.HelpBox("Medicine is missing model reference", MessageType.Warning);
            EditorGUILayout.Space(fieldSpace);
        }

        // Check if medicineType is a container
        if (obj.validMedicineContainers.HasFlag(obj.medicineType))
        {
            // Display input box for dispensedMedicine
            obj.dispensedMedicine = EditorGUILayout.ObjectField("Dispensed Medicine", obj.dispensedMedicine, typeof(MedicineScriptableObject), false) as MedicineScriptableObject;
            
            // Assert that the container has a dispensedObject reference
            if (obj.dispensedMedicine == null)
            {
                EditorGUILayout.HelpBox("Given Medicine Type " + obj.medicineType + " Requires a \"dispensedObject\" Reference", MessageType.Warning);
                EditorGUILayout.Space(fieldSpace);
            }

            // Display input box for dispenseCount
            obj.dispenseCount = EditorGUILayout.IntField("Dispense Count", obj.dispenseCount);

            // Assert that the containers dispense count is valid
            if (obj.dispenseCount <= 0)
            {
                EditorGUILayout.HelpBox("\"dispenseCount\" Must Be > 0 for the medicine type " + obj.medicineType,MessageType.Warning);
                EditorGUILayout.Space(fieldSpace);
            }
        } 

        // Check if the medicineType is submittable ex. pill, patch, halfpill, liquidcup
        if (obj.validFinalMedicine.HasFlag(obj.medicineType))
        {
            // Display input box for dosage
            obj.dosage = EditorGUILayout.FloatField("Dosage", obj.dosage);

            if (obj.dosage <= 0)
            {
                EditorGUILayout.HelpBox("\"dosage\" Must Be > 0 for the medicine type " + obj.medicineType, MessageType.Warning);
            }

            EditorGUILayout.HelpBox("Note: The specified medicine type " + obj.medicineType + " will inherit the Medicine Name of its container object", MessageType.Info);
            EditorGUILayout.Space(fieldSpace);
        } else // Medicine is not finalized
        {
            // Display input box for medicineName
            obj.medicineName = EditorGUILayout.TextField("Name of Medicine", obj.medicineName);

            if(obj.medicineName == "")
            {
                EditorGUILayout.HelpBox("Medicine name is empty", MessageType.Warning);
            }
        }
        
        
    }
}
#endif