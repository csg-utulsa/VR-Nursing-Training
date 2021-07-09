using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DosageIndicator : MonoBehaviour
{
    public GameObject textObject;
    Text text;
    public ActionCountMedicine dosageSource;

    void Awake()
    {
        text = textObject.GetComponent<Text>();
    }

    void Update()
    {
        if (dosageSource != null)
        {
            text.text = dosageSource.getCurrentDosage().ToString();
        }
    }
}
