using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TutorialManager : MonoBehaviour
{
    // Manage keyboard/vr text
    [SerializeField] private Node[] textNodeList;

    [SerializeField] private string[] keyboardTextList;
    [SerializeField] private GameObject keyboardTextObject;

    [SerializeField] private string[] vrTextList;
    [SerializeField] private GameObject vrTextObject;
    
    private TextMeshProUGUI keyboardText;
    private TextMeshProUGUI vrText;

    private int previousMessage;
    private string overrideText = "No current override message";
    private int overrideTime = 0;

    // Manage activation of certain objects
    [SerializeField] private Node[] activateNodeList;
    [SerializeField] private GameObject[] activateObjects;

    private void Start()
    {
        if (keyboardTextObject != null) keyboardText = keyboardTextObject.GetComponent<TextMeshProUGUI>();
        if (vrTextObject != null) vrText = vrTextObject.GetComponent<TextMeshProUGUI>();
    }

    void Update()
    {
        // Manage text
        for (int i = 0; i < textNodeList.Length; i++)
        {
            if (textNodeList[i].active)
            {
                if (previousMessage != i) overrideTime = 0;
                else if (overrideTime == 0)
                {
                    if (keyboardTextList.Length > i && keyboardTextObject != null) keyboardText.text = keyboardTextList[i];
                    else if (keyboardTextObject != null) keyboardText.text = "Error: Missing text in Tutorial Manager";
                    if (vrTextList.Length > i && vrTextObject != null) vrText.text = vrTextList[i];
                    else if (vrTextObject != null) vrText.text = "Error: Missing text in Tutorial Manager";
                    previousMessage = i;
                }
            }
        }
        if (overrideTime > 0)
        {
            overrideTime--;
            keyboardText.text = overrideText;
            vrText.text = overrideText;
        }

        // Manage Activation
        for (int i = 0; i < activateNodeList.Length; i++)
        {
            if (activateNodeList[i].active)
            {
                if (activateObjects.Length > i) activateObjects[i].SetActive(true);
            }
        }
    }

    public void overrideMessage(string message, int time)
    {
        overrideText = message;
        overrideTime = (int)Mathf.Round(time / Time.deltaTime);
    }
}
