using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objective : MonoBehaviour
{

    [SerializeField] private string description = "";
    [SerializeField] private string reportSuccess = "";
    [SerializeField] private string reportSkip = "";
    [SerializeField] private string reportFail = "";

    [SerializeField] private int strikeCount = 0;
    private int strikes = 0;
    [HideInInspector] public bool failed = false;

    [HideInInspector] public bool active = false;
    [HideInInspector] public bool skipped = false;
    [HideInInspector] public bool complete = false;

    public bool canSkip = false;
    [HideInInspector] public bool canContinue;

    private Node parentNode = null;
    private ScenarioStart scenarioParent = null;

    public ActionBase[] successActions;
    public ActionBase[] failActions;

    // Start is called before the first frame update
    void Start()
    {
        canContinue = canSkip;

        // Set the parent objective of success/fail actions
        foreach (ActionBase current in successActions)
        {
            current.setObjective(this, false);
        }
        foreach (ActionBase current in failActions)
        {
            current.setObjective(this, true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Set the scenario parent for reporting purposes and set the medicine type and dosage for each success/fail action
        if (parentNode != null && scenarioParent != null)
        {
            scenarioParent = parentNode.getScenarioParent();
            foreach (ActionBase current in successActions)
            {
                current.setMedicine(scenarioParent.getMedicine());
                current.setDosage(scenarioParent.getDosage());
            }
            foreach (ActionBase current in failActions)
            {
                current.setMedicine(scenarioParent.getMedicine());
                current.setDosage(scenarioParent.getDosage());
            }
        }
    }

    public void completeObjective()
    {
        // Only complete the objective if it is active
        if (active)
        {
            // Complete the objective and set to inactive
            if (!skipped)
            {
                complete = true;
                canContinue = true;
            }
            active = false;
            strikes = 0;

            // Tell the node to update it's objectives and skip previous nodes
            parentNode.updateObjectives();
            parentNode.skipPrevious();

            Debug.Log(reportSuccess); // DEBUG ONLY
            if (scenarioParent != null)
            {
                scenarioParent.addReport(reportSuccess);
            }
            
        }
    }

    public void skipObjective()
    {
        // Set to inactive
        active = false;
        strikes = 0;

        // Set to skipped if the node wasn't already complete
        if (!complete)
        {
            skipped = true;
            Debug.Log(reportFail); // DEBUG ONLY
            scenarioParent.addReport(reportSkip);
        }
    }

    public void failObjective()
    {
        if (active)
        {
            strikes += 1;
            if (strikes >= strikeCount && strikeCount != 0)
            {
                scenarioParent.addReport(reportFail);
                failed = true;
            }
        }
    }

    public void setParent(Node node)
    {
        parentNode = node;
    }

    public int getStrikes()
    {
        return strikes;
    }

    public string getDescription()
    {
        return description;
    }
}
