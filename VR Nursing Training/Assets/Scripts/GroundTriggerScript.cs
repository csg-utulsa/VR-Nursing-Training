using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundTriggerScript : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Interactable"))
        {
            other.gameObject.GetComponent<InteractableScript>().Reset();
        }
    }
}
