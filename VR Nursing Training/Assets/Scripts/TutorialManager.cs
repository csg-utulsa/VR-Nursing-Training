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


    // Manage activation of certain objects
    [SerializeField] private Node[] activateNodeList;
    [SerializeField] private GameObject[] activateObjects;

    private void Start()
    {
        keyboardText = keyboardTextObject.GetComponent<TextMeshProUGUI>();
        vrText = vrTextObject.GetComponent<TextMeshProUGUI>();
    }

    void Update()
    {
        // Manage text
        for (int i = 0; i < textNodeList.Length; i++)
        {
            if (textNodeList[i].active)
            {
                if (keyboardTextList.Length > i) keyboardText.text = keyboardTextList[i];
                else keyboardText.text = "Error: Missing Text in Tutorial Manager";
                if (vrTextList.Length > i) vrText.text = vrTextList[i];
                else vrText.text = "Error: Missing Text in Tutorial Manager";
            }
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
}
