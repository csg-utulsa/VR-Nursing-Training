using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
[RequireComponent(typeof(XRGrabInteractable))]
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
        Debug.Assert(GetComponent<Collider>().isTrigger == false, "Pickupable: "+name+" collider must be set to trigger!") ;
        StartPosition = transform.position;
        StartRotation = transform.eulerAngles;
        if (gameObject.layer != LayerMask.NameToLayer("Pickupable"))
        {
            Debug.LogWarning("Pickupable gameobject: "+name+" not set to pickupable layer, Force setting it");
            gameObject.layer = LayerMask.NameToLayer("Pickupable");
        }
    }

    private void OnEnable()
    {
        GetComponent<XRGrabInteractable>().selectEntered.AddListener(OnPickUp);
        GetComponent<XRGrabInteractable>().selectExited.AddListener(OnPutDown);
    }

    private void OnDisable()
    {
        GetComponent<XRGrabInteractable>().selectEntered.RemoveListener(OnPickUp);
        GetComponent<XRGrabInteractable>().selectExited.RemoveListener(OnPutDown);
    }

    public void ResetObject() 
    {
        ResetPosition();
        ResetRotation();
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
