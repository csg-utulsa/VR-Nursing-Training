using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Checkmark : MonoBehaviour
{
    public Node myNode;
    public GameObject checkmark;

    // Update is called once per frame
    void Update()
    {
        if (myNode.active)
        {
            checkmark.SetActive(true);
        }
    }
}
