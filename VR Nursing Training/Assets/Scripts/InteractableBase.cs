using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class InteractableBase : MonoBehaviour
{


    //NOTE: For this to work in VR, the vr interactable base **must** perform a callback on activate to the InteractableBase OnPickup and OnDrop equivalent.
    //-Logan

    public UnityEvent onPickup;
    public UnityEvent onDrop;

    public virtual void PickupInvoke(){
        onPickup.Invoke();
    }
    public virtual void DropInvoke(){
        onDrop.Invoke();
    }

    public virtual void Interact(Collider otherObj){
        Debug.Log("InteractableBase Interact Called (Override me!)");
    }
    public virtual bool canInteractWithHand(){
        return true;
    }




}
