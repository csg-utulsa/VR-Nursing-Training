using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DipTriggerScript : MonoBehaviour
{
    public Material material;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<InteractableScript>().isInteractable)
        {            other.gameObject.GetComponent<InteractableScript>().setMaterial(material);
        }
    }
}
