using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class VRHoverScript : MonoBehaviour
{
    public void OnHover(HoverEnterEventArgs args)
    {
        GameObject hoverObj = args.interactableObject.transform.gameObject;
        Debug.Log("HOVERING OVER OBJECT " + hoverObj.name); // For debug purposes only !!!???!!!

    }
}