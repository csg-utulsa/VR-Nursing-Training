using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class Printer : MonoBehaviour
{
    [Tooltip("Time in seconds between each printed character")]
    public float typeSpeed = .5f;
    private TextMeshPro messageBoard;

    private void Awake()
    {
        messageBoard = GetComponent<TextMeshPro>();
        messageBoard.text = "";
    }

    public void print(string test)
    {
        Debug.Log("ENTERED");
        StartCoroutine(printMessage(test, false, false));
    }

    public void printDialougue(string dialogue, bool newLine = false, bool erase = false)
    {
        //StartCoroutine(printMessage(dialogue, newLine, erase));
    }

    IEnumerator printMessage(string message, bool newLine, bool erase)
    {
        Debug.Log("Printing: " + message);
        if (newLine)
        {
            messageBoard.text += "<br>";
        }
        if (erase)
        {
            messageBoard.text = "";
        }
        for(int i = 0; i < message.Length; i++)
        {
            Debug.Log(i);
            messageBoard.text += message[i];
            yield return new WaitForSeconds(typeSpeed);
        }
        Debug.Log("Done!");
    }
}
