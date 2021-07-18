using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

    // Allows for teleportation ray to only be cast when in use/activated by the "Primary2DAxis Up" input.
    // Video referenced = "Introduction to VR in Unity - PART 3 : TELEPORTATION" by Valem.
    
public class LocomotionController : MonoBehaviour
{
    public XRController rightTeleportRay;
    public InputHelpers.Button teleportActivationButton;
    public float activationThreshhold = .1f;
    public Canvas questionCanvas;

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
            if (count > 0)
            {
                rightTeleportRay.gameObject.SetActive(true);
            }
            else
            {
                rightTeleportRay.gameObject.SetActive(CheckIfActivated(rightTeleportRay));
            }
        }
    }

    public bool CheckIfActivated(XRController controller)
    {
        InputHelpers.IsPressed(controller.inputDevice, teleportActivationButton, out bool isActivated, activationThreshhold);
        return isActivated;
    }
}
