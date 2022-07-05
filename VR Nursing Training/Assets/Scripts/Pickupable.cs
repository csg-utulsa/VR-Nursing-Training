using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class Pickupable : InteractableBase
{
    public bool focusOnPickup = false;
    public Vector3 pickUpAngle = Vector3.zero;
}
