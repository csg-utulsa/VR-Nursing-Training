using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CheckComplete : MonoBehaviour
{
    public Node[] completeNodes;
    public Objective[] skippableObjectives;
    public Objective[] failObjectives;
    public GameObject checkmark;
    public GameObject failmark;

    public GameObject reportObject;
    public GameObject reportText;
    public ScenarioStart scenarioParent;
    Text text;

    private bool noSkips = true;
    private bool finished = false;

    void Awake()
    {
        text = reportText.GetComponent<Text>();
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
                        checkmark.SetActive(true);
                    }
                    else
                    {
                        failmark.SetActive(true);
                    }

                    reportObject.SetActive(true);
                    text.text = scenarioParent.getReport();
                    scenarioParent.stopNodes();
                }
            }

            // Check for failed objectives
            for (int i = 0; i < failObjectives.Length; i++)
            {
                if (failObjectives[i].failed)
                {
                    finished = true;

                    failmark.SetActive(true);

                    reportObject.SetActive(true);
                    text.text = scenarioParent.getReport();
                    scenarioParent.stopNodes();
                }
            }
        }
    }

    
}
