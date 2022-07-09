using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundTriggerScript : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.name);
        if (other.TryGetComponent<Pickupable>(out Pickupable scrpt)) 
        {
            scrpt.ResetObject();
        }
    }
}
