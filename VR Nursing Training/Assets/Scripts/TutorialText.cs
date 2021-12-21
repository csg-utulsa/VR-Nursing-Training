using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TutorialText : MonoBehaviour
{
    TextMeshPro tutorialText = null;

    private void Awake()
    {
        tutorialText = GetComponent<TextMeshPro>();
    }

    private void SetTutorialText(string inputText)
    {
        if (tutorialText != null)
        {
            tutorialText.SetText(inputText);
        }
    }
}
