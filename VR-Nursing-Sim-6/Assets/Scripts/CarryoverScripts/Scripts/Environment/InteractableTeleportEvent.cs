using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class InteractableTeleportEvent : MonoBehaviour
{
    public UnityEvent onTeleportEnter;
    public UnityEvent onTeleportExit;

    public virtual void TeleportEnter(){
        onTeleportEnter.Invoke();
    }

    // Doesnt work yet
    public virtual void TeleportExit()
    {
        onTeleportExit.Invoke();
    }
}
