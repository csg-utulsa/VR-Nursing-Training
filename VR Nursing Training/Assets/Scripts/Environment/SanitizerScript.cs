using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SanitizerScript : Interactable
{
    public UnityEvent sanitizeHands;
    public ParticleSystem BubbleAnimation;

    public override void Interact(GameObject other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            Debug.Log("Sanitizing Hands...");
            sanitizeHands.Invoke();
            BubbleAnimation.Play();
        }
    }

}

