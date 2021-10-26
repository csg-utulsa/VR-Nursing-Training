using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawerScript3D : InteractableBase
{
    public bool drawerOpen = false;
    private Animator drawerOpenAnim;

    public void Start()
    {
        drawerOpenAnim = gameObject.transform.parent.GetComponent<Animator>();
    }

    public override void Interact(Collider other)
    {
        Debug.Log("Interacting...");
        if(!drawerOpen)
        {
            drawerOpenAnim.SetBool("drawerOpen", true);
            drawerOpen = true;
        }
        else
        {
            drawerOpenAnim.SetBool("drawerOpen", false);
            drawerOpen = false;
        }
    }


}
