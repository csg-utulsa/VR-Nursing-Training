using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class InteractableDialogBtn : Interactable
{

    public UnityEvent interactEvent;

    public bool isInteractable;
    public string type;

    public bool interactWithHand = true;

    public int dosageValue = 0;
    public GameObject cup;
    public string buttonName = "";
    public TextMeshPro buttonText;
    public ParticleSystem HighlightAnimation;
    public bool highlighted = false;

    public void CursorHighlight()
    {
        highlighted = true;

    }

    public void HighlightStart()
    {
        HighlightAnimation.Play();
    }

    public void HighlightStop()
    {
        Debug.Log("Stopping Highlight");
        HighlightAnimation.Stop();
        HighlightAnimation.Clear();
    }

    public void select(){
        //returns the fact this button was picked to the controller
        Debug.Log("Dialog button selected.");
    }



    private void Start()
    {
        if(buttonName != "")
        {
            buttonText.text=buttonName;
        }

    }

    public override void Interact(GameObject other)
    {
        Debug.Log("Interacted w/ Floating dialog button");
        if (interactEvent != null)
        {
            cup.GetComponent<LiquidObjectScript>().setDosage(dosageValue);
            interactEvent.Invoke();
        }
    }


}

