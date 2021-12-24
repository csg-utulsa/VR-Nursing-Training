using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialLiquid : MonoBehaviour
{
    private bool correctDosage = false;
    public GameObject emptyLiquid = null;
    public GameObject fullLiquid = null;

    private void Awake()
    {
        SetDosage(false);
    }

    public void SetDosage(bool isFilled)
    {
        if (emptyLiquid != null && fullLiquid != null)
        {
            emptyLiquid.SetActive(!isFilled);
            fullLiquid.SetActive(isFilled);
        }
    }
    public bool getDosage()
    {
        return correctDosage;
    }

}
