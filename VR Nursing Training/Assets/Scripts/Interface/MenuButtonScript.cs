using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MenuButtonScript : Interactable
{
    public UnityEvent onInteract;
    //public bool flag = false;
    
   /* private void OnTriggerEnter(Collider other)
    {
        //flag = true;
        Interact(other.gameObject);
        
    }*/
    public void callInteract(Collider other)
    {
        //flag = true;
        Interact(other.gameObject);
    }


    public override void Interact(GameObject other = null)
    {
        
        /*if (flag == true)
        {
            //MenuButtonManager.VRToggle = true;
            Debug.Log("USING VR");
        } else
        {
            //MenuButtonManager.VRToggle = false;
            Debug.Log("NOT USING VR");
        }
        flag = false;*/

        onInteract.Invoke();
    }
}
