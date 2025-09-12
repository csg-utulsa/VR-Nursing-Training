using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StrikeManager : MonoBehaviour
{
    [SerializeField] private Objective myObjective;
    [SerializeField] private GameObject strikemark1;
    [SerializeField] private GameObject strikemark2;
    [SerializeField] private GameObject strikemark3;

    // Update is called once per frame
    void Update()
    {
        if (myObjective.getStrikes() >= 1)
        {
            strikemark1.SetActive(true);
            if (myObjective.getStrikes() >= 2)
            {
                strikemark2.SetActive(true);
                if (myObjective.getStrikes() >= 3)
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
