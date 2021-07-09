using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StrikeManager : MonoBehaviour
{
    public Objective myObjective;
    public GameObject strikemark1;
    public GameObject strikemark2;
    public GameObject strikemark3;

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
            }
        }
    }
}
