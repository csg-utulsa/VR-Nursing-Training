using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class InteractableSpeechButton : InteractableBase, HoverableBase
{

    public UnityEvent interactEvent;
    public List<GameObject> buttonChildren;
    public List<float> zvalues;
    public static float xAxisSpacing = .0025f;
    public static float yAxisSpacing = .005f;
    public static float yDistance = 10;
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
        //Debug.Log("WERG");
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
        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            if (gameObject.transform.GetChild(i).CompareTag("Button"))
            {

                buttonChildren.Add(gameObject.transform.GetChild(i).gameObject);
                
            }
        }
        Debug.Log("ActualCount " + buttonChildren.Count);

        for (int i = 0; i < buttonChildren.Count; i++)
        {
            zvalues.Add(i - (Mathf.Floor((buttonChildren.Count - 1) / 2)));
            Debug.Log("CountZVals" + zvalues.Count);
            if (buttonChildren.Count % 2 == 0f)
            {
                zvalues[i] -= .5f;
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
        if (openStuff)
        {
            Debug.Log("Moving Buttons...");
            for (int i = 0; i < buttonChildren.Count; i++)
            {

                //buttonChildren[i].transform.Translate(.0025f, .005f, zvalues[i] / 100);
                buttonChildren[i].transform.position += new Vector3(xAxisSpacing, yAxisSpacing, zvalues[i] * .005f);
                if (buttonChildren[i].transform.localPosition.y >= yDistance)
                {
                    Debug.Log("Stopping Buttons");
                    openStuff = false;
                }
            }

        } else if (closeStuff)
        {
            for (int i = 0; i < buttonChildren.Count; i++)
            {
                buttonChildren[i].transform.position += new Vector3(-xAxisSpacing, -yAxisSpacing, -zvalues[i] *.005f);
                if (buttonChildren[i].transform.localPosition.y <= Vector3.zero.y)
                {
                    closeStuff = false;
                    buttonChildren[i].SetActive(false);
                }
            }
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
        if (buttonChildren.Count >= 1)
        {
            for (int i = 0; i < buttonChildren.Count; i++) {
                buttonChildren[i].SetActive(true);
            }
            openStuff = true;
            closeStuff = false;
        }
        
    }

    public void CloseButton()
    {
        if (buttonChildren.Count >= 1)
        {
            for (int i = 0; i < buttonChildren.Count; i++)
            {
                buttonChildren[i].GetComponent<InteractableSpeechButton>().CloseButton();
            }
            closeStuff = true;
            openStuff = false;
        }
    }

}

