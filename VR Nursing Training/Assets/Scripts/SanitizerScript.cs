using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SanitizerScript : MonoBehaviour
{
    public UnityEvent sanitizeHands;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            Debug.Log("Sanitizing Hands...");
            sanitizeHands.Invoke();
        }
    }
}
