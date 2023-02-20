using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// DEPRECATED

public class VRLookatScript : MonoBehaviour
{
    /*public void OnTriggerStay(Collider other)
    {
        if (other.gameObject.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.TargetVector = other.transform.position;
            PlayerKeyboardInputScript.VRLook = true;
        }
        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.TargetVector = other.transform.position;
            PlayerKeyboardInputScript.VRLook = true;
        }
    }

    public void OnTriggerExit(Collider other)
    {
        if (other.gameObject.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.TargetVector = Vector3.forward;
            PlayerKeyboardInputScript.VRLook = false;
        }
        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.TargetVector = Vector3.forward;
            PlayerKeyboardInputScript.VRLook = false;
        }
    }*/
}
