using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[RequireComponent(typeof(TextMeshPro))]

public class TutorialText : MonoBehaviour
{
    public string tutText;
    private TextMeshPro dynamicText = null;

    private void Awake()
    {
        dynamicText = gameObject.GetComponent<TextMeshPro>();
    }

    private void Update()
    {
        if (dynamicText != null)
        {
            dynamicText.SetText(tutText);
        }
    }
}
