using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawerScript3D : Interactable
{
    public bool drawerOpen = false;
    private Animator drawerOpenAnim;

    public void Start()
    {
        drawerOpenAnim = gameObject.transform.parent.GetComponent<Animator>();
    }

    public override void Interact(GameObject other)
    {
        Debug.Log("Interacting...");
        

        if (!drawerOpen)
        {
            gameObject.transform.parent.GetComponent<Rigidbody>().AddForce(new Vector3(2, 0, 0), ForceMode.Impulse);
            drawerOpen = true;
        }
        else
        {
            gameObject.transform.parent.GetComponent<Rigidbody>().AddForce(new Vector3(-2, 0, 0), ForceMode.Impulse);
            drawerOpen = false;
        }
    }


}
