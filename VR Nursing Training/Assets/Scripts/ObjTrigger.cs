using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjTrigger : MonoBehaviour
{
    private PlayerKeyboardInputScript keyboardInput;
    private List<GameObject> triggerObjects = new List<GameObject>(); // stores all pickupable objects currently in the trigger

    private void Awake()
    {
        keyboardInput = FindObjectOfType<PlayerKeyboardInputScript>();
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent<Pickupable>(out Pickupable pickup)) // only interact with pickupable (interactive) objects
        {
            if (other.gameObject != keyboardInput.getGrabbingObject()) // only accept objects that aren't actively being grabbed
            {
                triggerObjects.Add(other.gameObject); // add to list of objects in trigger
                OnEnter(other.gameObject);
            }
            else Debug.Log("Object " + other.gameObject.name + " is currently being grabbed, so trigger " + gameObject.name + " will ignore enter");
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.TryGetComponent<Pickupable>(out Pickupable pickup)) // only interact with pickupable (interactive) objects
        {
            if (triggerObjects.Contains(other.gameObject)) // only accept objects that have properly entered the trigger
            {
                triggerObjects.Remove(other.gameObject); // remove object from trigger list
                OnExit(other.gameObject);
            }
            else Debug.Log("Object " + other.gameObject.name + " never properly entered trigger, so trigger " + gameObject.name + " will ignore exit");
        }
    }

    // This function is triggered any time a valid pickupable object enters the trigger (unless it is transitioning to the hand in 3D)
    public virtual void OnEnter(GameObject other) 
    {
        Debug.Log("Object " + other.name + " entered trigger " + gameObject.name + " - however, no behavior has been implemented for OnEnter()");
    }

    // This function is triggered any time an pickupable object that properly called onEnter exits the trigger
    public virtual void OnExit(GameObject other)
    {
        Debug.Log("Object " + other.name + " exited trigger " + gameObject.name + " - however, no behavior has been implemented for OnExit()");
    }
}

// POSSIBLE TO-DO: Add logic for objects that enter a trigger during the grab transition but then remain in that trigger after grab has finished

// NOTE: For this script to work right now, the line "hit.collider.enabled = false;" inside of PlayerKeyboardInputScript's PickUp() function must be commented out