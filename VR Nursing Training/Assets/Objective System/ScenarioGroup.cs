using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScenarioGroup : MonoBehaviour
{
    [SerializeField] private Node[] nodes;
    [SerializeField] private string medicineType;
    [SerializeField] private double targetDosage;

    // Returns all the nodes in the group
    public Node[] getNodes()
    {
        return nodes;
    }

    // Returns the medicine type
    public string getMedicine()
    {
        return medicineType;
    }

    // Returns the dosage
    public double getDosage()
    {
        return targetDosage;
    }
}
