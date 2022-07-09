using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class Pickupable : MonoBehaviour
{
    public bool focusOnPickup = false;
    public Vector3 pickUpAngle = Vector3.zero;
    public Vector3 CustomDropRotation;
    public bool useCustomDropRotation;
    [HideInInspector] public Vector3 StartPosition;
    [HideInInspector] public Vector3 StartRotation;

    private void Awake() 
    {
        StartPosition = transform.position;
        StartRotation = transform.eulerAngles;
    }

    public void ResetObject() 
    {
        transform.position = StartPosition;
        transform.eulerAngles = StartRotation;
    }

    public void ResetPosition() 
    {
        transform.position = StartPosition;
    }

    public void ResetRotation()
    {
        transform.eulerAngles = StartRotation;
    }

    public void ResetCustomRotation() 
    {
        transform.eulerAngles = CustomDropRotation;
    }
}
