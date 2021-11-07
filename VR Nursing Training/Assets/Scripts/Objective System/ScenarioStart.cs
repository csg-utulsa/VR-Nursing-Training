using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScenarioStart : MonoBehaviour
{
    [SerializeField] private ScenarioGroup[] possibleStarts;
    [SerializeField] private GameObject[] clipboards;

    [SerializeField] private bool randomStart = true;
    [SerializeField] private int startIndex = 0;

    private string medicineType;
    private double targetDosage;

    private string report;
    private List<Node> nodesList = new List<Node>();

    // Start is called before the first frame update
    void Start()
    {
        if (randomStart)
        {
            startIndex = Random.Range(0, possibleStarts.Length);
        }
        for (int i = 0; i < possibleStarts[startIndex].getNodes().Length; i++)
        {
            possibleStarts[startIndex].getNodes()[i].setScenarioParent(this);
            possibleStarts[startIndex].getNodes()[i].activateNode();
        }
        medicineType = possibleStarts[startIndex].getMedicine();
        targetDosage = possibleStarts[startIndex].getDosage();
        clipboards[startIndex].SetActive(true);
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

    // Adds a node to the parent list
    public void addNode(Node newNode)
    {
        nodesList.Add(newNode);
    }

    // Deactivates all nodes in the parent list
    public void stopNodes()
    {
        foreach(Node current in nodesList)
        {
            current.deactivateNode();
        }
    }
    // Returns the correct medicine type
    public string getMedicine()
    {
        return medicineType;
    }

    // Returns the correct dosage
    public double getDosage()
    {
        return targetDosage;
    }
}
