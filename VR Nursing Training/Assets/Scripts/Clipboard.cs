using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Clipboard : MonoBehaviour
{
    public string scenarioText;
    Text text;

    void Awake()
    {
        text = GetComponent<Text>();
        text.text = scenarioText;
    }
}
