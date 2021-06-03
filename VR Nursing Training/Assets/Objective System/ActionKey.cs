using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionKey : ActionBase
{
    public string myKey; // Inputs can be created through Edit > Project Settings > Input
                         // Make sure to set the type to "Key or Mouse Button"

    // Update is called once per frame
    void Update()
    {
        // Set action to performed if the key is pressed
        if (Input.GetButton(myKey))
        {
            performAction();
        }
    }
}
