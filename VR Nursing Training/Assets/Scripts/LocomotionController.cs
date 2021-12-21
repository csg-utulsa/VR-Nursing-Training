using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

    // Allows for teleportation ray to only be cast when in use/activated by the "Primary2DAxis Up" input.
    // Video referenced = "Introduction to VR in Unity - PART 3 : TELEPORTATION" by Valem.
    
public class LocomotionController : MonoBehaviour
{
    public XRController rightTeleportRay;
    public XRController leftTeleportRay;
    public InputHelpers.Button teleportActivationButton;
    public float activationThreshhold = .1f;
    public Canvas questionCanvas;
    public Camera canvasCam;
    public bool toggleRightRayVisible;
    public bool toggleLeftRayVisible;
    // Update is called once per frame
    void Update()
    {
        int count = 0;
        foreach (Transform child in questionCanvas.transform)
        {
            if (child.gameObject.activeSelf)
            {
                count++;
            }
        }
        
        if (rightTeleportRay)
        {
            if (toggleRightRayVisible)
            {
                rightTeleportRay.gameObject.SetActive(true);
            }
            else if (count > 0)
            {
                canvasCam.gameObject.SetActive(true);
                rightTeleportRay.gameObject.SetActive(true);
            }
            else
            {
                canvasCam.gameObject.SetActive(false);
                rightTeleportRay.gameObject.SetActive(CheckIfActivated(rightTeleportRay));
            }
        }
        if (leftTeleportRay)
        {
            if (toggleLeftRayVisible)
            {
                leftTeleportRay.gameObject.SetActive(true);
            }
            else if (count > 0)
            {
                canvasCam.gameObject.SetActive(true);
                leftTeleportRay.gameObject.SetActive(true);
            }
            else
            {
                canvasCam.gameObject.SetActive(false);
                leftTeleportRay.gameObject.SetActive(CheckIfActivated(rightTeleportRay));
            }
        }
    }

    public bool CheckIfActivated(XRController controller)
    {
        InputHelpers.IsPressed(controller.inputDevice, teleportActivationButton, out bool isActivated, activationThreshhold);
        return isActivated;
    }
}
