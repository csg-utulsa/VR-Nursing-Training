using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElevatorOpen : MonoBehaviour
{
    // IGNORE THIS CODE THIS IS STUPID

    public float distance = 1.5f;
    public float speed = 1f;

    void Start()
    {
        Invoke("OpenDoor", 1);
    }

    
    private void OpenDoor()
    {
        Vector3 direction = new Vector3(0f, 0f, distance);
        transform.Translate(direction * Time.deltaTime * speed);
    }

    // bad
}
