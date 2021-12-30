using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CheckComplete : MonoBehaviour
{
    [SerializeField] private Node[] completeNodes;
    [SerializeField] private Objective[] skippableObjectives;
    [SerializeField] private Objective[] failObjectives;
    [SerializeField] private GameObject checkmark;
    [SerializeField] private GameObject failmark;

    [SerializeField] private GameObject reportObject;
    [SerializeField] private GameObject reportText;
    [SerializeField] private ScenarioStart scenarioParent;
    Text text;

    private bool noSkips = true;
    private bool finished = false;

    void Awake()
    {
        if (reportText != null) text = reportText.GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        // Check for complete scenario
        if (!finished)
        {
            for (int i = 0; i < completeNodes.Length; i++)
            {
                if (completeNodes[i].active)
                {
                    finished = true;

                    for (int j = 0; j < skippableObjectives.Length; j++)
                    {
                        if (skippableObjectives[j].skipped)
                        {
                            noSkips = false;
                        }
                    }
                    if (noSkips)
                    {
                        if (checkmark != null) checkmark.SetActive(true);
                    }
                    else
                    {
                        if (failmark != null) failmark.SetActive(true);
                    }

                    if (reportObject != null) reportObject.SetActive(true);
                    if (reportText != null) text.text = scenarioParent.getReport();
                    scenarioParent.stopNodes();
                }
            }

            // Check for failed objectives
            for (int i = 0; i < failObjectives.Length; i++)
            {
                if (failObjectives[i].failed)
                {
                    finished = true;

                    if (failmark != null) failmark.SetActive(true);

                    if (reportObject != null) reportObject.SetActive(true);
                    if (reportText != null) text.text = scenarioParent.getReport();
                    scenarioParent.stopNodes();
                }
            }
        }
    }

    
}
