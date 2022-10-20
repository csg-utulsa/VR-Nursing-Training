using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class VRHoverScript : MonoBehaviour
{
    PlayerKeyboardInputScript inputScript;

    private void Awake()
    {
        inputScript = transform.root.gameObject.GetComponent<PlayerKeyboardInputScript>();
    }

    public void OnHover(HoverEnterEventArgs args)
    {
        GameObject hoverObj = args.interactableObject.transform.gameObject;
        inputScript.LookingAt(hoverObj.transform.position);
        Debug.Log("HOVERING OVER OBJECT " + hoverObj.name); // For debug purposes only
    }
}