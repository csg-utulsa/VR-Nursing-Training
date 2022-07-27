using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class InteractableSpeechButton : Interactable
{

    public UnityEvent interactEvent;
    public List<GameObject> buttonChildren;
    public List<float> zvalues;
    [SerializeField] public static float xAxisSpacing = .0025f;
    [SerializeField] public static float yAxisSpacing = .005f;
    [SerializeField] public static float yDistance = 10;
    public bool isInteractable;
    public string type;
    private bool buttonOpen = false;
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

    //ANDRES ADDITION OC DO NOT STEAL
    private GameObject parentButton = null;


    public void CursorHighlight()
    {
        highlighted = true;

    }

    public void LookHighlight()
    {
        //nothing
        //Debug.Log("WERG");
    }

    /*public void CursorInteract()
    {
        //Interact something
        Debug.Log("CursorInteract called inside InteractableSpeechButton and invoking interactEvent");
        //cup.GetComponent<LiquidObjectScript>().setDosage(dosageValue);
        interactEvent.Invoke();
        //Interact(this.gameObject.Collider);
    }*/

    /*public override bool canInteractWithHand()
    {
        return interactWithHand;
    }*/


    public void HighlightStart()
    {
        if (GetComponent<Collider>().enabled)
        {
            HighlightAnimation.Play();
        }
    }
    public void HighlightStop()
    {
        HighlightAnimation.Stop();
        HighlightAnimation.Clear();
    }

    private void Start()
    {
        if (buttonName != "")
        {
            buttonText.text = buttonName;
        }

        // ANDRES ADDITION
        
        if (transform.parent != null && transform.parent.GetComponent<InteractableSpeechButton>() != null)
        {
            parentButton = transform.parent.gameObject;
        }

        // Gets Children that are buttons
        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            if (gameObject.transform.GetChild(i).CompareTag("Button"))
            {

                buttonChildren.Add(gameObject.transform.GetChild(i).gameObject);
                
            }
        }
        //Debug.Log("ActualCount " + buttonChildren.Count);

        for (int i = 0; i < buttonChildren.Count; i++)
        {
            zvalues.Add(i - (Mathf.Floor((buttonChildren.Count - 1) / 2)));
            //Debug.Log("CountZVals" + zvalues.Count);
            if (buttonChildren.Count % 2 == 0f)
            {
                zvalues[i] -= .5f;
            }
        }
    }

    private void FixedUpdate() // Change to Coroutine Later
    {
        if (openStuff)
        {
            //Debug.Log("Moving Buttons...");
            for (int i = 0; i < buttonChildren.Count; i++)
            {

                //buttonChildren[i].transform.Translate(.0025f, .005f, zvalues[i] / 100);
                buttonChildren[i].transform.position += new Vector3(xAxisSpacing, yAxisSpacing, zvalues[i] * .005f);
                if (buttonChildren[i].transform.localPosition.y >= yDistance)
                {
                    //Debug.Log("Stopping Buttons");
                    buttonChildren[i].GetComponent<Collider>().enabled = true;
                    openStuff = false;
                }
            }

        } 
        else if (closeStuff)
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
        Interact(other.gameObject);
    }

    public override void Interact(GameObject other)
    {
        //Debug.Log("Interacted w/ Floating speech button");
        //CombineObject(other.gameObject);
        if (interactEvent != null)
        {
            interactEvent.Invoke();
        }


        if (buttonOpen == false)
        {
            OpenButton();
            buttonOpen = true;
        }
        else
        {
            CloseButton();
            buttonOpen = false;
        }
    }

    public void OpenButton()
    {
        if (buttonChildren.Count >= 1)
        {
            for (int i = 0; i < buttonChildren.Count; i++) {
                buttonChildren[i].GetComponent<Collider>().enabled = false;
                buttonChildren[i].SetActive(true);
            }
            openStuff = true;
            closeStuff = false;
        }

        // ANDRES STUFF
        CloseSiblings();
        
    }

    public void CloseButton()
    {
        if (buttonChildren.Count >= 1)
        {
            for (int i = 0; i < buttonChildren.Count; i++)
            {
                buttonChildren[i].GetComponent<InteractableSpeechButton>().CloseButton();
                buttonChildren[i].GetComponent<Collider>().enabled = false;
            }
            closeStuff = true;
            openStuff = false;
            
        }
        buttonOpen = false;
    }

    // Closes children of sibling buttons
    public void CloseSiblings()
    {
        if (parentButton != null)
        {
            foreach (GameObject babyButton in parentButton.GetComponent<InteractableSpeechButton>().buttonChildren) // Change to for loop later
            {
                if (babyButton != this.gameObject)
                {
                    babyButton.GetComponent<InteractableSpeechButton>().CloseButton();
                }
            }
        }
    }
}

