/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionTrigger : ActionBase
{
    public string[] targetTag;

    private void OnTriggerEnter(Collider other)
    {
        for (int i = 0; i < targetTag.Length; i++)
        {
            if (other.CompareTag(targetTag[i]))
            {
                performAction();
            }
        }
    }
}*/