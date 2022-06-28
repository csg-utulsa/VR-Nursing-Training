using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRLookatScript : MonoBehaviour
{
    public void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<DetectLooks>() != null)
        {
            other.gameObject.GetComponent<DetectLooks>().lookStarted.Invoke();
        }
        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<DetectLooks>() != null)
        {
            other.gameObject.transform.parent.GetComponent<DetectLooks>().lookStarted.Invoke();
        }
    }

    public void OnTriggerExit(Collider other)
    {
        if (other.gameObject.GetComponent<DetectLooks>() != null)
        {
            other.gameObject.GetComponent<DetectLooks>().lookStopped.Invoke();
        }
        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<DetectLooks>() != null)
        {
            other.gameObject.transform.parent.GetComponent<DetectLooks>().lookStopped.Invoke();
        }
    }
}
