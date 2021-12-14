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
        if(other.gameObject.GetComponent<HoverableBase>() != null){
            foundObject = gameObject.GetComponent<HoverableBase>();
        }
    }

    private void OnTriggerExit(Collider other)
    {
       if(other.gameObject.GetComponent<HoverableBase>() != null && other.gameObject.GetComponent<HoverableBase>() == foundObject){
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
                foundObject.CursorHighlight();

                if(triggerPull){
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
