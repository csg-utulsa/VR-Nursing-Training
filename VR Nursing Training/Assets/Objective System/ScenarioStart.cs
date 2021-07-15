using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScenarioStart : MonoBehaviour
{
    public Node[] possibleStarts;

    private int startIndex;
    private string report;

    // Start is called before the first frame update
    void Start()
    {
        startIndex = Random.Range(0, possibleStarts.Length);
        possibleStarts[startIndex].setScenarioParent(this);
        possibleStarts[startIndex].activateNode();
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
}
