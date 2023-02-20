using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class PatchObjectScript : MonoBehaviour
{
    [SerializeField] private GameObject textObject;
    Text text;

    private bool marked = false;
    private string initialText;
    private string[] arrayText;
    private string finalText;

    public UnityEvent onDateSet;


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
            onDateSet.Invoke();
        }
    }

    public bool isMarked()
    {
        return marked;
    }
}
