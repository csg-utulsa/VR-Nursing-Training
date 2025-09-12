using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionBase : MonoBehaviour
{
    private List<Objective> myObjectives = new List<Objective>();
    private bool failAction = false;
    protected string medicineType = "";
    protected double targetDosage = 1000;

    // Set objective to complete if the action is performed
    public void performAction()
    {
        if (failAction)
        {
            foreach (Objective current in myObjectives)
            {
                current.failObjective();
            }
        }
        else
        {
            foreach (Objective current in myObjectives)
            {
                current.completeObjective();
            }
        }
    }

    // Sets objective parent (used in objective class)
    public void setObjective(Objective obj, bool fail)
    {
        myObjectives.Add(obj);
        failAction = fail;
    }

    // Sets medicine type
    public void setMedicine(string med)
    {
        medicineType = med;
    }

    // Sets target dosage
    public void setDosage(double dose)
    {
        targetDosage = dose;
    }

    // Returns medicine type
    public string getMedicine()
    {
        return medicineType;
    }

    // Returns target dosage
    public double getDosage()
    {
        return targetDosage;
    }
}
