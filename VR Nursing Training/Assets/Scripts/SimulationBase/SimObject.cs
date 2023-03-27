using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

// Logan Patrick 9.6.2022s

/// <summary>
/// This is a base object class for any object considered important to the Sim.
/// These generally contain blanket traits that are shared between objects, and are pivotal in 
/// having objects interact with the objective system as they will have tracking tags and mechanics
/// built into them.
/// 
/// If you want to make a more complicated object to be used with the objective system, extend this class.
/// </summary>


public class SimObject : MonoBehaviour
{
    public bool CanPickUp = false;

    public UnityEvent<GameObject> OnPickup; // GameObject arguments are the grabbee
    public UnityEvent<GameObject> OnDrop;
    
    public UnityEvent OnHoverEnter;
    public UnityEvent OnHoverExit;

    public UnityEvent<GameObject> OnInteract; // TODO: Instead of GameObject, use an 'SimObjectInteractor' so we can standardize things.

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
