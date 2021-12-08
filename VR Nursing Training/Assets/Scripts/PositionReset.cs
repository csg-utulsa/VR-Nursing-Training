using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PositionReset : MonoBehaviour
{
    public Transform posDefault = null;

    // Start is called before the first frame update
    void Awake()
    {
        posDefault = this.GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        if (this.transform.position.y <= -10)
        {
            ResetPosition();
        }
    }

    public void ResetPosition()
    {
        this.transform.position = posDefault.position;
        this.transform.rotation = posDefault.rotation;
    }


}
