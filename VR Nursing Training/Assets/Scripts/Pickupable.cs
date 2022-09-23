using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

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
    [Header("Events: "),Space(5)]
    [SerializeField] private UnityEvent onPickUp;
    [SerializeField] private UnityEvent onPutDown;

    private void Awake() 
    {
        StartPosition = transform.position;
        StartRotation = transform.eulerAngles;
        GetComponent<XRGrabInteractable>().selectEntered.AddListener(OnPickUp);
        GetComponent<XRGrabInteractable>().selectExited.AddListener(OnPutDown);
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

    public void OnPickUp(SelectEnterEventArgs args = null)
    {
        onPickUp.Invoke();
    }

    public void OnPutDown(SelectExitEventArgs args = null)
    {
        onPutDown.Invoke();
    }
}
