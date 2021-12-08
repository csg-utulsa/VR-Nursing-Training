using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DipTriggerScript : MonoBehaviour
{
    public Material material;
    public UnityEvent handWash;
    private void OnTriggerEnter(Collider other)
    {
        Interact(other.gameObject);
    }


    public void Interact(GameObject other)
    {
        Debug.Log("Interact w/ water");

        if (other.gameObject.CompareTag("Hands"))
        {
            Debug.Log("Washing Hands...");
            handWash.Invoke();
        }
        else if (other.gameObject.GetComponent<InteractableScript>().isInteractable)
        {
            other.gameObject.GetComponent<InteractableScript>().setMaterial(material);
        }
    }

}
