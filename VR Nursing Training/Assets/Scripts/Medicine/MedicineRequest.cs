using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/Procedure 1/Medicine Request")]
public class MedicineRequest : ScriptableObject
{
    public string MedicineType;
    public string MedicineName;
    public float TargetDosage;
    public string DosageUnit;
    public ClipboardText ClipboardText;

    public string GetClipboardText()
    {
        return ClipboardText.GetText(MedicineType, MedicineName, TargetDosage, DosageUnit);
    }
}
