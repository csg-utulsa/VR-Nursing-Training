using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MenuButtonScript : InteractableBase
{
    public UnityEvent onInteract;
    public bool flag = false;
    
    private void OnTriggerEnter(Collider other)
    {
        flag = true;
        Interact(other);
        
    }
    public void callInteract(Collider other)
    {
        flag = true;
        Interact(other);
    }


    public override void Interact(Collider other)
    {
        
        if (flag == true)
        {
            MenuButtonManager.VRToggle = true;
            Debug.Log("USING VR");
        } else
        {
            MenuButtonManager.VRToggle = false;
            Debug.Log("NOT USING VR");
        }
        flag = false;

        onInteract.Invoke();
    }
}
