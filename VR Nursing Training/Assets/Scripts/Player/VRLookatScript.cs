using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRLookatScript : MonoBehaviour
{
    public void OnTriggerStay(Collider other)
    {
        if (other.gameObject.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.targetVector = other.transform.position;
            PlayerKeyboardInputScript.VRLook = true;
        }
        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.targetVector = other.transform.position;
            PlayerKeyboardInputScript.VRLook = true;
        }
    }

    public void OnTriggerExit(Collider other)
    {
        if (other.gameObject.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.targetVector = Vector3.forward;
            PlayerKeyboardInputScript.VRLook = false;
        }
        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<DetectLooks>() != null)
        {
            PlayerKeyboardInputScript.targetVector = Vector3.forward;
            PlayerKeyboardInputScript.VRLook = false;
        }
    }
}
