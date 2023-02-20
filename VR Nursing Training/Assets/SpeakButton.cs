using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// DEPRECATED
public class SpeakButton : InteractableBase
{
   /* public GameObject[] buttons;
    public GameObject button1;
    public GameObject button2;
    public GameObject button3;
    bool toggle = false;
    bool openstuff = false;
    bool closestuff = false;
    public void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        Debug.Log("Interacting with buttons");
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

    // Update is called once per frame
    void FixedUpdate()
    {
        if (openstuff)
        {
            /**
            button1.transform.position += new Vector3(.0025f, .005f, -.005f);
            button2.transform.position += new Vector3(.0025f, .005f, 0);
            button3.transform.position += new Vector3(.0025f, .005f, .005f);
            if (button2.transform.localPosition.y >= 10f)
            {
                Debug.Log("Stopping Buttons");
                openstuff = false;
            }
            **/
   /*
        } else if (closestuff)
        {
            button1.transform.position -= new Vector3(.0025f, .005f, -.005f);
            button2.transform.position -= new Vector3(.0025f, .005f, 0);
            button3.transform.position -= new Vector3(.0025f, .005f, .005f);
            if (button2.transform.localPosition.y <= Vector3.zero.y)
            {
                Debug.Log("Stopping Buttons");
                closestuff = false;
                button1.SetActive(false);
                button2.SetActive(false);
                button3.SetActive(false);
            }
        }
        
    }

    public void OpenButton()
    {
        button1.SetActive(true);
        button2.SetActive(true);
        button3.SetActive(true);
        openstuff = true;
    }

    public void CloseButton()
    {
        closestuff = true;
        openstuff = false;
    }*/
}
