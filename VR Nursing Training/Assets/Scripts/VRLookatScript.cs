using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRLookatScript : MonoBehaviour
{

    public void OnTriggerStay(Collider other)
    {
        if (other.gameObject.GetComponent<HoverableBase>() != null)
        {
            other.gameObject.GetComponent<HoverableBase>().LookHighlight();
        }
        else if (other.gameObject.transform.parent != null && other.gameObject.transform.parent.GetComponent<HoverableBase>() != null)
        {
            other.gameObject.GetComponent<HoverableBase>().LookHighlight();
        }
    }
}
