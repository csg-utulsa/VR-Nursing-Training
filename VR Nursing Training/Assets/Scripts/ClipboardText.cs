using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ClipboardText : MonoBehaviour
{
    public string clientName;
    public string age;
    public string dateOfBirth;
    public string allergies;
    public string roomNumber;
    public string patientHistory;
    public string medicalDiagnosis;
    public string currentVitalSigns;
    public string doctorName;
    public string dateTime;
    public string[] orders;

    Text text;

    void Awake()
    {
        text = GetComponent<Text>();
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
                    "Date/Time: " + dateTime +
                    "Orders:" + "\n";
        for (int i = 0; i < orders.Length; i++)
        {
            text.text += orders[i] + "\n";
        }
        text.text += doctorName;
    }
}
