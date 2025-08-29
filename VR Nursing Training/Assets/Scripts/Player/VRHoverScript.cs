using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor))]
public class VRHoverScript : MonoBehaviour
{
    PlayerKeyboardInputScript inputScript;

    private void Awake()
    {
        GetComponent<UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor>().hoverEntered.AddListener(OnHover);
        GetComponent<UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor>().hoverExited.AddListener(OnHoverExit);
        inputScript = XRRigSingleton.xrs.GetComponent<PlayerKeyboardInputScript>();
    }

    public void OnHover(HoverEnterEventArgs args)
    {
        GameObject hoverObj = args.interactableObject.transform.gameObject;
        if (hoverObj.TryGetComponent<DetectLooks>(out DetectLooks script))
        {
            script.PlayerIsLooking();
        }
        //inputScript.LookingAt(hoverObj.transform.position);
        Debug.Log("HOVERING OVER OBJECT " + hoverObj.name); // For debug purposes only
    }

    public void OnHoverExit(HoverExitEventArgs args)
    {
        GameObject hoverObj = args.interactableObject.transform.gameObject;
        if (hoverObj.TryGetComponent<DetectLooks>(out DetectLooks script))
        {
            script.PlayerStoppedLooking();
        }
    }
}