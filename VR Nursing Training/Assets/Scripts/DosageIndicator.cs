using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DosageIndicator : MonoBehaviour
{
    [SerializeField] private GameObject textObject;
    Text text;
    [SerializeField] private ActionCountMedicine dosageSource;

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
