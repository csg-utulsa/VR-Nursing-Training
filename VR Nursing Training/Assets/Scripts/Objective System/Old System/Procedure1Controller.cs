using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MyBox;
using UnityEngine.UI;

public class Procedure1Controller : MonoBehaviour
{
    [SerializeField] private MedicineRequest[] MedicineRequests;
    [SerializeField] private bool randomStart = true;
    [ConditionalField(nameof(randomStart), true)]
    [SerializeField] private int startIndex = 0;
    [SerializeField] private Text ClipboardText;

    private string medicineTypeVariableKey;
    private string targetDosageVariableKey;

    private string report;
    private MedicineRequest selectedRequest;

    // Start is called before the first frame update
    public void InitializeProcedureVariables()
    {
        if (randomStart)
        {
            startIndex = Random.Range(0, MedicineRequests.Length);
        }

        selectedRequest = MedicineRequests[startIndex];

        OTSVariableManager.GetInstance().SetStringVariable(medicineTypeVariableKey, selectedRequest.MedicineType);
        OTSVariableManager.GetInstance().SetFloatVariable(targetDosageVariableKey, selectedRequest.TargetDosage);

        SetClipboardText(selectedRequest);
    }
    
    // Adds to the report
    public void addReport(string newReport)
    {
        report += "-" + newReport + "\n";
    }

    // Gets the report
    public string getReport()
    {
        return report;
    }

    private void SetClipboardText(MedicineRequest request)
    {
        ClipboardText.text = request.GetClipboardText();
    }
}
