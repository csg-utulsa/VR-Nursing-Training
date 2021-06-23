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

    // Update is called once per frame
    void Update()
    {
        if(rightTeleportRay)
        {
            rightTeleportRay.gameObject.SetActive(CheckIfActivated(rightTeleportRay));
        }
    }

    public bool CheckIfActivated(XRController controller)
    {
        InputHelpers.IsPressed(controller.inputDevice, teleportActivationButton, out bool isActivated, activationThreshhold);
        return isActivated;
    }
}
