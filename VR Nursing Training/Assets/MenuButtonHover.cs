using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuButtonHover : MonoBehaviour
{


    private void OnTriggerStay(Collider other)
    {
        Debug.Log("Trigger Entered...");
        GetComponent<Material>().color = new Color(192, 192, 192);
    }

    private void OnTriggerExit(Collider other)
    {
        GetComponent<Material>().color = new Color(219, 219, 219);
    }
}
