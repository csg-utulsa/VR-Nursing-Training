using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class InteractableDialogBtn : InteractableBase, HoverableBase
{

    public UnityEvent interactEvent;

    public bool isInteractable;
    public string type;

    public bool interactWithHand = true;


    public string buttonName = "";
    public TextMeshPro buttonText;
    public GameObject buttonVolume;
    public ParticleSystem HighlightAnimation;
    public bool highlighted = false;



    //HoverableBase things

    public void CursorHighlight()
    {
        highlighted = true;

    }

    public void LookHighlight()
    {
        //nothing
    }

    public void CursorInteract()
    {
        //Interact something
        Debug.Log("CursorInteract called inside InteractbaleDialogButton and I don't know what to do");
        interactEvent.Invoke();
    }








    public override bool canInteractWithHand()
    {
        return interactWithHand;
    }


    public void highlight(){
        //shows particle effect while constantly called
        highlighted = true; //will be set back to false later if the function isn't called again
    }

    public void select(){
        //returns the fact this button was picked to the controller
        Debug.Log("Dialog button selected.");
    }



    private void Start()
    {
        if(buttonName != ""){
            buttonText.text=buttonName;
        }

    }

    private void FixedUpdate()
    {

        if(highlighted){
            HighlightAnimation.Play();
            highlighted = false; //this variable will be set back to true if the cursor is still looking at the box.
        }
        else{
            HighlightAnimation.Stop();
            HighlightAnimation.Clear();
           // HighlightAnimation.setEnable
        }

//         if (targets.Length > 0 && step < targets.Length && targets[step] != null)
//         {
//             Collider[] colliders = Physics.OverlapSphere(transform.position, combineDist, layer);
//             if (colliders.Length > 1)
//             {
//                 touchedObject = colliders[0].gameObject;
//             }
//             else
//             {
//                 touchedObject = null;
//             }
//             if (touchedObject == targets[step])
//             {
//                 CombineObject(touchedObject);
//             }
//         }
    }

    public override void Interact(Collider other)
    {
        Debug.Log("Interacted w/ Floating dialog button");
        //CombineObject(other.gameObject);
        if (interactEvent != null)
        {
            //interactEvent.Invoke();
        }
    }


}

