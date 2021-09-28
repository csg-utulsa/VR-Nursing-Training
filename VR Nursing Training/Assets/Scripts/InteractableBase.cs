using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableBase : MonoBehaviour
{
    public virtual void Interact(Collider otherObj){
        Debug.Log("InteractableBase Interact Called (Override me!)");
    }
}
