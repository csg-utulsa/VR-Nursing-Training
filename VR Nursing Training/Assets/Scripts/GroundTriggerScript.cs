using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundTriggerScript : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<InteractableScript>().isInteractable)
        {
            other.gameObject.GetComponent<InteractableScript>().Reset();
        }
    }
}
