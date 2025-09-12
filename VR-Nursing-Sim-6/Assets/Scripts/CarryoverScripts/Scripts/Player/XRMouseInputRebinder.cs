using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Inputs;

public class XRMouseInputRebinder : MonoBehaviour
{
    public InputActionManager inputManager;
    InputActionAsset pInput;
    private void Awake()
    {
        pInput = inputManager.actionAssets[0];
    }

    public void setPickupBinding(bool setToPickup)
    {
        if (setToPickup)
        {
            pInput.actionMaps[1].actions[1].ApplyBindingOverride("<Mouse>/leftButton", null,"<Mouse>/leftButton");
        } 
        else
        {
            pInput.actionMaps[1].actions[1].ApplyBindingOverride("<Mouse>/rightButton", null, "<Mouse>/leftButton");
        }
        
    }
}
