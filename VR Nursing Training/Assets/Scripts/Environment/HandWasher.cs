using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class HandWasher : Interactable
{
    [Header("Variable Control")]
    public string HandWashedOTSVariableName;

    [Header("Animation Control")]
    public ParticleSystem BubbleAnimation;

    public override void Interact(GameObject other)
    {
        if (other.CompareTag("Hands"))
        {
            OTSVariableManager.GetInstance().SetBoolVariable(HandWashedOTSVariableName, true);
            BubbleAnimation.Play();
        }
    }

}
