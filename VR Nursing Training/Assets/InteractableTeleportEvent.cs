using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class InteractableTeleportEvent : MonoBehaviour
{
    public UnityEvent onTeleport;

    public virtual void TeleportInvoke(){
        onTeleport.Invoke();
    }
}
