using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ClipboardText : MonoBehaviour
{
    [SerializeField] private GameObject textObject;
    Text text;

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
    [SerializeField] private ScenarioGroup parentScenario;

    void Awake()
    {
        text = textObject.GetComponent<Text>();
        text.text = "Client name: " + clientName + "\n" +
                    "Age: " + age + "\n" +
                    "Date of birth: " + dateOfBirth + "\n\n" +
                    "Allergies: " + allergies + "\n\n" +
                    "Room # " + roomNumber + "\n\n" +
                    "Patient history: " + patientHistory + "\n\n" +
                    "Medical diagnosis: " + medicalDiagnosis + "\n\n" +
                    "Current vital signs: " + currentVitalSigns + "\n\n" +
                    doctorName + "\n\n" +
                    "ORDER SHEET" + "\n" +
                    "Date/Time: " + dateTime + "\n" +
                    "Orders:" + "\n" +
                    "Use " + parentScenario.getCategory() + " Medication\n" +
                    parentScenario.getMedicine();
        if (parentScenario.getCategory() == "ORAL")
        {
            text.text += ", " + parentScenario.getDosage() + " Pills\n";
        }
        if (parentScenario.getCategory() == "PATCH")
        {
            text.text += "\n";
        }
        if (parentScenario.getCategory() == "LIQUID")
        {
            text.text += ", " + parentScenario.getDosage() + "mL\n";
        }

        text.text += doctorName;
    }
}
