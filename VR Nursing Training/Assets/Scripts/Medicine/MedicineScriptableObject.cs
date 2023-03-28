using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

#if UNITY_EDITOR
using UnityEditor;
#endif

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
    LiquidContainer = 1 << 6, // 6 No Dispense
    Liquid = 1 << 7 // 7
}

[CreateAssetMenu(fileName = "Medicine", menuName = "ScriptableObjects/Medicine", order = 1)]
public class MedicineScriptableObject : ScriptableObject
{
    /// <summary>
    /// Actual name of the Medication
    /// Ex. DIGOXIN, IBUPROFEN
    /// </summary>
    [HideInInspector] public string medicineName = "";

    /// <summary>
    /// Prefab for the medication
    /// </summary>
    [HideInInspector] public GameObject prefab;

    /// <summary>
    /// Scriptable object that this medicine will dispense
    /// </summary>
    [HideInInspector] public MedicineScriptableObject dispensedMedicine;

    /// <summary>
    /// If set to false will not allow this medicine to interact with dispensers
    /// </summary>
    [HideInInspector] public bool doDispense = false;

    /// <summary>
    /// Object dosage of a single instance of this object
    /// </summary>
    [HideInInspector] public float dosage = -1;

    /// <summary>
    /// Total amount of medicine this object can dispense
    /// </summary>
    [HideInInspector] public float dispenseCount = 0;

    /// <summary>
    /// Amount of objects this object dispenses per use
    /// </summary>
    [HideInInspector] public int amntPerDispense = 1;

    /// <summary>
    /// Medicine type for this gameObject
    /// </summary>
    public MedicineTypes medicineType;

    /// <summary>
    /// All medicine types that can dispense an object
    /// </summary>
    [HideInInspector] public static MedicineTypes validMedicineContainers = MedicineTypes.PillContainer | MedicineTypes.FullPill | MedicineTypes.PatchContainer | MedicineTypes.LiquidContainer;

    /// <summary>
    /// All medicine types that can be submitted
    /// </summary>
    [HideInInspector] public static MedicineTypes validFinalMedicine = MedicineTypes.FullPill | MedicineTypes.HalfPill | MedicineTypes.Patch | MedicineTypes.Liquid;

    /// <summary>
    /// All medicine that have dosage set through script / can't be set in inspector
    /// </summary>
    [HideInInspector] public static MedicineTypes dynamicDosageMedicine = MedicineTypes.Liquid;

    [HideInInspector] public bool isRoot;

    [HideInInspector] public bool isDynamic;

    /// <summary>
    /// Sets default values for specified type
    /// </summary>
    private void Awake() 
    {
        if (validMedicineContainers.HasFlag(medicineType))
        {
            doDispense = true;
            
        }

        if (dynamicDosageMedicine.HasFlag(medicineType))
        {
            isDynamic = true;
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
        EditorGUI.BeginChangeCheck();
        obj.prefab = EditorGUILayout.ObjectField("Medicine Prefab", obj.prefab, typeof(GameObject), false) as GameObject;
        
        // Assert that the medicine has a model
        if (obj.prefab == null)
        {
            EditorGUILayout.HelpBox("Medicine is missing model reference", MessageType.Warning);
            EditorGUILayout.Space(fieldSpace);
        }

        // Check if medicineType is a container
        if (MedicineScriptableObject.validMedicineContainers.HasFlag(obj.medicineType))
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
            obj.dispenseCount = EditorGUILayout.FloatField("Dispense Count", obj.dispenseCount);

            // Assert that the containers dispense count is valid
            if (obj.dispenseCount <= 0)
            {
                EditorGUILayout.HelpBox("\"dispenseCount\" Must Be > 0 for the medicine type " + obj.medicineType,MessageType.Warning);
                EditorGUILayout.Space(fieldSpace);
            }

            // Display input box for amntPerDispense
            obj.amntPerDispense = EditorGUILayout.IntField("Objects Dispensed Per Use", obj.amntPerDispense);

        } 

        // Check if the medicineType is submittable ex. pill, patch, halfpill, liquidcup
        if (MedicineScriptableObject.validFinalMedicine.HasFlag(obj.medicineType))
        {
            // If needs a dosage assigned
            if (!MedicineScriptableObject.dynamicDosageMedicine.HasFlag(obj.medicineType))
            {
                // Display input box for dosage
                obj.dosage = EditorGUILayout.FloatField("Dosage", obj.dosage);

                // If dosage not correct
                if (obj.dosage <= 0)
                {
                    EditorGUILayout.HelpBox("\"dosage\" Must Be > 0 for the medicine type " + obj.medicineType, MessageType.Warning);
                }
            }
            

            EditorGUILayout.HelpBox("Note: The specified medicine type " + obj.medicineType + " will inherit the Medicine Name of its container object", MessageType.Info);
            EditorGUILayout.Space(fieldSpace);
        } else // Medicine is not finalized
        {
            // Display input box for medicineName
            obj.medicineName = EditorGUILayout.TextField("Name of Medicine", obj.medicineName);
            obj.isRoot = true;
            if (obj.medicineName == "")
            {
                EditorGUILayout.HelpBox("Medicine name is empty", MessageType.Warning);
            }
        }
        if (EditorGUI.EndChangeCheck())
        {
            EditorUtility.SetDirty(obj);
            Debug.Log("Set Dirty");
        }

    }
}
#endif