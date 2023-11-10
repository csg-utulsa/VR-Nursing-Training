/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShareStrikes : MonoBehaviour
{
    private Objective[] childObjectives;
    private int maxStrikes = 0;
    private bool allComplete = false;

    private void Awake()
    {
        childObjectives = GetComponentsInChildren<Objective>();
    }

    private void Update()
    {
        allComplete = true;
        foreach (Objective obj in childObjectives)
        {
            if (obj.complete) continue;
            else
            {
                allComplete = false;
                if (obj.getStrikes() < maxStrikes)
                    obj.setStrikes(maxStrikes);
                else if (obj.getStrikes() > maxStrikes)
                    maxStrikes = obj.getStrikes();
            }
        }

        if (allComplete)
        {
            Destroy(this); // if all child objectives are complete, this script is no longer needed
        }
    }
}
*/