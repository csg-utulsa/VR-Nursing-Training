using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

//A physical object that denotes a cursor for interacting with HoverableBase buttons.

//Requires a trigger collider to represent the cursor. A small sphere is perfect.



public class HoverableCursor : MonoBehaviour
{


    HoverableBase foundObject = null;
    public XRController ControllerObserver;
    public InputHelpers.Button teleportActivationButton;
    public float activationThreshhold = .1f;


    // Start is called before the first frame update
    void Start()
    {
        
    }


    private void OnTriggerEnter(Collider other)
    {
        //1: check if object is hoverable base
        if(other.gameObject.GetComponent<HoverableBase>() != null){
            Debug.Log("HoverableCusor trigger enter 1");
            foundObject = gameObject.GetComponent<HoverableBase>();
        }

        //2: check if parent is hoverablebase

        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<HoverableBase>() != null)
        {
            Debug.Log("HoverableCusor trigger enter 2");
            foundObject = other.gameObject.transform.parent.GetComponent<HoverableBase>(); //Cursor is over the object OR hand is near the object
        }
    }

    private void OnTriggerExit(Collider other)
    {
       if(other.gameObject.GetComponent<HoverableBase>() != null && other.gameObject.GetComponent<HoverableBase>() == foundObject){
           Debug.Log("HoverableCusor trigger exit null 1");
            foundObject = null;
        }

        //2: check if parent is hoverablebase

        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<HoverableBase>() != null && other.gameObject.transform.parent.GetComponent<HoverableBase>() == foundObject)
        {
            Debug.Log("HoverableCusor trigger exit null 2");
            foundObject = null;
        }
    }


    // Update is called once per frame
    void Update()
    {

        //scan for objects
        //if object leaves collider AND is equal to foundObject, set foundObject to null
        //if object enters collider AND is of type hoverablebase, set foundobject to it.

        if (ControllerObserver)
        {
            bool triggerPull = CheckIfActivated(ControllerObserver);
            if(foundObject != null){
                Debug.Log("HoverableCursor highlighting a cursor");
                foundObject.CursorHighlight();

                if(triggerPull){
                    Debug.Log("HoverableCursor interact called");
                    foundObject.CursorInteract();
                }
            }
        }






    }

    public bool CheckIfActivated(XRController controller)
    {
        InputHelpers.IsPressed(controller.inputDevice, teleportActivationButton, out bool isActivated, activationThreshhold);
        return isActivated;
    }
}
