using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(menuName = "Scriptable Objects/Procedure 1/Clipboard Text")]
public class ClipboardText : ScriptableObject
{
    [SerializeField] private string clientName;
    [SerializeField] private string age;
    [SerializeField] private string dateOfBirth;
    [SerializeField] private string allergies;
    [SerializeField] private string roomNumber;
    [SerializeField] private string patientHistory;
    [SerializeField] private string medicalDiagnosis;
    [SerializeField] private string currentVitalSigns;
    [SerializeField] private string doctorName;
    [SerializeField] private string dateTime;

    public string GetText(string MedicineType, string MedicineName, float MedicineDosage, string DosageUnit)
    {
        string text = $"Client name: {clientName}\n" +
                    $"Age: {age}\n" +
                    $"Date of birth: {dateOfBirth}\n\n" +
                    $"Allergies: {allergies}\n\n" +
                    $"Room #{roomNumber}\n\n" +
                    $"Patient history: {patientHistory}\n\n" +
                    $"Medical diagnosis: {medicalDiagnosis}\n\n" +
                    $"Current vital signs: {currentVitalSigns}\n\n" +
                    $"{doctorName}\n\n" +
                    $"ORDER SHEET\n" +
                    $"Date/Time: {dateTime}\n" +
                    $"<color=blue>Orders:\n" +
                    $"Use {MedicineType} Medication\n {MedicineName}";

        if (!DosageUnit.Equals(""))
        {
            text += $", {MedicineDosage} {DosageUnit}";
        }

        text += $"</ color >\n{doctorName}";

        return text;
    }
}
