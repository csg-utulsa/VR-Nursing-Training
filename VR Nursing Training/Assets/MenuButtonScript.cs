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

    public override void Interact(Collider other)
    {
        onInteract.Invoke();
        if (flag == true)
        {
            MenuButtonManager.VRToggle = true;
        } else
        {
            MenuButtonManager.VRToggle = false;
        }
        flag = false;
    }
}
