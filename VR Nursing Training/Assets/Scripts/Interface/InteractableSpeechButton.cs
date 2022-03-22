using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class InteractableSpeechButton : InteractableBase, HoverableBase
{

    public UnityEvent interactEvent;
    public GameObject[] buttonChildren;
    public bool isInteractable;
    public string type;
    private bool toggle = false;
    private bool openStuff;
    private bool closeStuff;

    public bool interactWithHand = true;

    //public int dosageValue = 0;
    //public GameObject cup;
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
        Debug.Log("CursorInteract called inside InteractableSpeechButton and invoking interactEvent");
        //cup.GetComponent<LiquidObjectScript>().setDosage(dosageValue);
        interactEvent.Invoke();
    }

    public override bool canInteractWithHand()
    {
        return interactWithHand;
    }


    public void highlight()
    {
        //shows particle effect while constantly called
        highlighted = true; //will be set back to false later if the function isn't called again
    }

    public void select()
    {
        //returns the fact this button was picked to the controller
        Debug.Log("Dialog button selected.");
    }


    private void Start()
    {
        if (buttonName != "")
        {
            buttonText.text = buttonName;
        }

        // Gets Children that are buttons
        for (int i = 0; i <= gameObject.transform.childCount; i++)
        {
            if (gameObject.transform.GetChild(i).CompareTag("Button"))
            {
                buttonChildren.SetValue(gameObject.transform.GetChild(i), i);
            }

            
        }
    }

    private void FixedUpdate()
    {

        if (highlighted)
        {
            HighlightAnimation.Play();
            highlighted = false; //this variable will be set back to true if the cursor is still looking at the box.
        }
        else
        {
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

    public void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        Debug.Log("Interacted w/ Floating speech button");
        //CombineObject(other.gameObject);
        if (interactEvent != null)
        {
            //interactEvent.Invoke();
        }
        if (toggle == false)
        {
            OpenButton();
            toggle = true;
        }
        else
        {
            CloseButton();
            toggle = false;
        }
    }

    public void OpenButton()
    {
        float z = 0;
        for(int i = 0; i <= buttonChildren.Length; i++ )
        {
            z = i - ((buttonChildren.Length-1) / 2);
            if (z % 2 == 0)
            {
                z -= .5f;
            }
        }
    }

    public void CloseButton()
    {
        closeStuff = true;
        openStuff = false;
    }

}

