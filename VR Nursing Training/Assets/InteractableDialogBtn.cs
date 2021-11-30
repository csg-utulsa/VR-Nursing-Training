using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class InteractableDialogBtn : InteractableBase
{

    public UnityEvent interactEvent;

    public bool isInteractable;
    public string type;

    public bool interactWithHand = true;

    public override bool canInteractWithHand()
    {
        return interactWithHand;
    }

    private void Start()
    {


    }

    private void FixedUpdate()
    {
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

    public override void Interact(Collider other)
    {
        Debug.Log("Interacted w/ InteractableBlehelbelbfel on Obj");
        //CombineObject(other.gameObject);
        if (interactEvent != null)
        {
            //interactEvent.Invoke();
        }
    }


}

