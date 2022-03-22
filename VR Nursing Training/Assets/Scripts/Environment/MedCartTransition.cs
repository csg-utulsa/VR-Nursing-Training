using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MedCartTransition : MonoBehaviour
{
    // Moves the items on the current medcart to the target one
    // This script should be placed on the current medcart trigger

    [Header("NOTE: THIS SCRIPT SHOULD BE PLACED ON A CART TRIGGER")]
    [Tooltip("The cart trigger on the medcart items should be moved to")]
    public GameObject targetCart; // the trigger the items should be moved to
    [Tooltip("If true, only the items on the cart when the room is completed will be moved.  If false, any medications on the cart when moveObjects() is called will be moved.")]
    public bool snapshot = false;
    private List<GameObject> triggerObjects = new List<GameObject>();
    private List<GameObject> previousParents = new List<GameObject>();
    private List<GameObject> tempObjects = new List<GameObject>();
    private List<Vector3> recordedPositions = new List<Vector3>();
    private List<Quaternion> recordedRotations = new List<Quaternion>();

    // Add medicines that enter the trigger to the list
    private void OnTriggerEnter(Collider other)
    {
        if (!snapshot)
        {
            if (other.gameObject.CompareTag("Pill") || other.gameObject.CompareTag("HalfPill") || other.gameObject.CompareTag("Patch") || other.gameObject.CompareTag("Liquid"))
            {
                triggerObjects.Add(other.gameObject);
            }
        }
        else
        {
            if (other.gameObject.CompareTag("Pill") || other.gameObject.CompareTag("HalfPill") || other.gameObject.CompareTag("Patch") || other.gameObject.CompareTag("Liquid"))
            {
                tempObjects.Add(other.gameObject);
            }
        }
    }

    // Remove medicines that exit the trigger
    private void OnTriggerExit(Collider other)
    {
        if (!snapshot)
        {
            if (triggerObjects.Contains(other.gameObject))
            {
                triggerObjects.Remove(other.gameObject);
            }
        }
        else
        {
            if (tempObjects.Contains(other.gameObject))
            {
                tempObjects.Remove(other.gameObject);
            }
        }
    }

    public void recordObjects()
    {
        // empty the current list of objects
        while (triggerObjects.Count > 0) triggerObjects.RemoveAt(0);

        // add all objects currently in the trigger
        foreach (GameObject obj in tempObjects)
        {
            triggerObjects.Add(obj);
            recordedPositions.Add(obj.transform.position);
            recordedRotations.Add(obj.transform.rotation);
        }
    }

    // Move all objects from the current medcart to the new one
    public void moveObjects()
    {
        // create an empty parent object
        GameObject moveParent = new GameObject("Move Parent");
        moveParent.transform.position = transform.position;
        moveParent.transform.rotation = transform.rotation;

        // if in snapshot mode, move objects to their recorded positions
        if (snapshot)
        {
            for (int i = 0; i < triggerObjects.Count; i++)
            {
                triggerObjects[i].transform.position = recordedPositions[i];
                triggerObjects[i].transform.rotation = recordedRotations[i];
            }
        }
        // record original parents and parent each moving object to the empty object
        for (int i = 0; i < triggerObjects.Count; i++)
        {
            if (triggerObjects[i].transform.parent != null) previousParents.Add(triggerObjects[i].transform.parent.gameObject);
            else previousParents.Add(null);
            triggerObjects[i].transform.SetParent(moveParent.transform);
        }

        // move the parent object
        moveParent.transform.position = targetCart.transform.position;
        moveParent.transform.rotation = targetCart.transform.rotation;


        // restore original parents and clear the lists
        for (int i = 0; i < triggerObjects.Count; i++)
        {
            if (previousParents[i] != null) triggerObjects[i].transform.SetParent(previousParents[i].transform);
            else triggerObjects[i].transform.SetParent(null);
        }
        while (triggerObjects.Count > 0) triggerObjects.RemoveAt(0);
        while (previousParents.Count > 0) previousParents.RemoveAt(0);
        while (tempObjects.Count > 0) tempObjects.RemoveAt(0);
        while (recordedPositions.Count > 0) recordedPositions.RemoveAt(0);
        while (recordedRotations.Count > 0) recordedRotations.RemoveAt(0);

        // delete the empty parent object
        Destroy(moveParent);
    }
}
