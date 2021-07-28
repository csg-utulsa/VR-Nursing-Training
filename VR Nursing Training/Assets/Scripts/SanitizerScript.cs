using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SanitizerScript : MonoBehaviour
{
    public UnityEvent sanitizeHands;
    public ParticleSystem BubbleAnimation;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            Debug.Log("Sanitizing Hands...");
            sanitizeHands.Invoke();
            BubbleAnimation.Play();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            BubbleAnimation.Stop();
        }
    }
}

