using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScenarioStart : MonoBehaviour
{
    public Node[] possibleStarts;
    public GameObject[] clipboards;

    private int startIndex;
    private string report;
    private List<Node> nodesList = new List<Node>();

    // Start is called before the first frame update
    void Start()
    {
        startIndex = Random.Range(0, possibleStarts.Length);
        possibleStarts[startIndex].setScenarioParent(this);
        possibleStarts[startIndex].activateNode();
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

    public void addNode(Node newNode)
    {
        nodesList.Add(newNode);
    }

    public void stopNodes()
    {
        foreach(Node current in nodesList)
        {
            current.deactivateNode();
        }
    }
}
