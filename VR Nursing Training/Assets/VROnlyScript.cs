using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VROnlyScript : MonoBehaviour
{
    public GameObject liquidCanvas;

    private void Start()
    {
        LiquidTriggerScript.measureCanvas = liquidCanvas;
    }
}
