using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CheckComplete : MonoBehaviour
{
    public Node completeNode;
    public Objective[] skippableObjectives;
    public GameObject checkmark;
    public GameObject failmark;

    public GameObject reportObject;
    public GameObject reportText;
    public ScenarioStart reportSource;
    Text text;

    private bool noSkips = true;

    void Awake()
    {
        text = reportText.GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        if (completeNode.active)
        {
            for (int i = 0; i < skippableObjectives.Length; i++)
            {
                if (skippableObjectives[i].skipped)
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
            text.text = reportSource.getReport();
        }
    }
}
