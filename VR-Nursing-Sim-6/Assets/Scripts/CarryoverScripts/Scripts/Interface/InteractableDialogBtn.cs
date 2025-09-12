using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class InteractableDialogBtn : Interactable
{
    public UnityEvent interactEvent;
    public string buttonName = "";
    public TextMeshPro buttonText;
    public ParticleSystem HighlightAnimation;


    public void HighlightStart()
    {
        HighlightAnimation.Play();
    }

    public void HighlightStop()
    {
        if (debugging) Debug.Log("Stopping Highlight");
        HighlightAnimation.Stop();
        HighlightAnimation.Clear();
    }

    // Set text if in use
    private void Awake()
    {
        if(buttonName != "")
        {
            buttonText.text=buttonName;
        }
    }

    public override void Interact(GameObject other)
    {
        if (debugging) Debug.Log("Interacted w/ Floating dialog button");
        if (interactEvent != null)
        {
            interactEvent.Invoke();
        }
    }
}

