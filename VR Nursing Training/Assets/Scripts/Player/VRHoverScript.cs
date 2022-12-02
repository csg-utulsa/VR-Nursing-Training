using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(XRRayInteractor))]
public class VRHoverScript : MonoBehaviour
{
    PlayerKeyboardInputScript inputScript;

    private void Awake()
    {
        GetComponent<XRRayInteractor>().hoverEntered.AddListener(OnHover);
        inputScript = XRRigSingleton.xrs.GetComponent<PlayerKeyboardInputScript>();
    }

    public void OnHover(HoverEnterEventArgs args)
    {
        GameObject hoverObj = args.interactableObject.transform.gameObject;
        inputScript.LookingAt(hoverObj.transform.position);
        Debug.Log("HOVERING OVER OBJECT " + hoverObj.name); // For debug purposes only
    }
}