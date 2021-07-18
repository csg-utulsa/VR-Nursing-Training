using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PatchObjectScript : MonoBehaviour
{
    public GameObject textObject;
    Text text;

    private bool marked = false;
    private string initialText;
    private string[] arrayText;
    private string finalText;

    // Set text object when object is awake
    void Awake()
    {
        text = textObject.GetComponent<Text>();
    }

    // Mark patch by updating text to display date and time
    public void markPatch()
    {
        if (!marked)
        {
            marked = true;
            initialText = System.DateTime.Now.ToString("g");
            arrayText = initialText.Split(' ');
            finalText = arrayText[0] + "\n" + arrayText[1];
            text.text = finalText;
        }
    }
}
