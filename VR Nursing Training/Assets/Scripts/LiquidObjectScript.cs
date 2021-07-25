using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LiquidObjectScript : MonoBehaviour
{
    private int dosage;

    public int getDosage()
    {
        return dosage;
    }

    public void setDosage(int newDosage)
    {
        dosage = newDosage;
    }
}
