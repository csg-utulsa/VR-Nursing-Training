using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MedCartTransition : MonoBehaviour
{
    // Moves the items on the current medcart to the target one
    // This script should be placed on the current medcart trigger

    public GameObject targetCart; // the trigger the items should be moved to
    private List<GameObject> triggerObjects = new List<GameObject>();

    // Add medicines that enter the trigger to the list
    private void OnTriggerEnter(Collider other)
    {
        // if medicine
        triggerObjects.Add(other.gameObject);
    }

    // Remove medicines that exit the trigger
    private void OnTriggerExit(Collider other)
    {
        // if medicine
        triggerObjects.Remove(other.gameObject);
    }

    // Move all objects from the current medcart to the new one
    public void moveObjects()
    {
        Vector3 posChange = targetCart.transform.position - transform.position;
        foreach (GameObject obj in triggerObjects)
        {
            obj.transform.position += posChange;
        }
        while (triggerObjects.Count > 0) triggerObjects.RemoveAt(0);
    }
}
