/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroupStrikeManager : MonoBehaviour
{
    [SerializeField] private Objective[] myObjectives;
    private Objective currentObjective;
    [SerializeField] private GameObject strikemark1;
    [SerializeField] private GameObject strikemark2;
    [SerializeField] private GameObject strikemark3;

    // Update is called once per frame
    void Update()
    {
        // update current objective
        if (currentObjective == null || !currentObjective.active)
        {
            currentObjective = null;
            foreach (Objective obj in myObjectives)
            {
                if (obj.active)
                {
                    currentObjective = obj;
                }
            }
        }
        if (currentObjective == null)
        {
            strikemark3.SetActive(false);
            strikemark2.SetActive(false);
            strikemark1.SetActive(false);
            return;
        }

        // update strikes
        if (currentObjective.getStrikes() >= 1)
        {
            strikemark1.SetActive(true);
            if (currentObjective.getStrikes() >= 2)
            {
                strikemark2.SetActive(true);
                if (currentObjective.getStrikes() >= 3)
                {
                    strikemark3.SetActive(true);
                }
                else
                {
                    strikemark3.SetActive(false);
                }
            }
            else
            {
                strikemark3.SetActive(false);
                strikemark2.SetActive(false);
            }
        }
        else
        {
            strikemark3.SetActive(false);
            strikemark2.SetActive(false);
            strikemark1.SetActive(false);
        }
    }
}
*/