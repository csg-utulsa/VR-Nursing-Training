using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckComplete : MonoBehaviour
{
    public Node completeNode;
    public Objective[] skippableObjectives;
    public GameObject checkmark;
    public GameObject failmark;

    private bool noSkips = true;

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
        }
    }
}
