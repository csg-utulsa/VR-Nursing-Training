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
        if (other.gameObject.CompareTag("Pill") || other.gameObject.CompareTag("HalfPill") || other.gameObject.CompareTag("Patch") || other.gameObject.CompareTag("Liquid"))
        {
            triggerObjects.Add(other.gameObject);
        }
    }

    // Remove medicines that exit the trigger
    private void OnTriggerExit(Collider other)
    {
        if (triggerObjects.Contains(other.gameObject))
        {
            triggerObjects.Remove(other.gameObject);
        }
    }

    // Move all objects from the current medcart to the new one
    public void moveObjects()
    {
        Vector3 posChange = targetCart.transform.position - transform.position;
        Quaternion rotChange = Quaternion.Euler(targetCart.transform.rotation.x - transform.rotation.x, targetCart.transform.rotation.y - transform.rotation.y, targetCart.transform.rotation.z - transform.rotation.z);
        foreach (GameObject obj in triggerObjects)
        {
            obj.transform.position += posChange;
            obj.transform.rotation = Quaternion.Euler(transform.rotation.x + rotChange.x, transform.rotation.y + rotChange.y, transform.rotation.z + rotChange.z);
        }
        while (triggerObjects.Count > 0) triggerObjects.RemoveAt(0);
    }
}
