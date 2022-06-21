// GENERATED AUTOMATICALLY FROM 'Assets/Scripts/Player/PlayerInput.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @PlayerInput : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @PlayerInput()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""PlayerInput"",
    ""maps"": [
        {
            ""name"": ""CharacterControls"",
            ""id"": ""b1462320-1ba9-4ce9-9c8c-4a2ac8520f00"",
            ""actions"": [
                {
                    ""name"": ""PickUp"",
                    ""type"": ""Button"",
                    ""id"": ""a38b8eb3-6d6e-4713-81ca-28e4cd3d8333"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""MouseLook"",
                    ""type"": ""Value"",
                    ""id"": ""83b15768-4683-4f5f-8ed1-2dea9cf2ed89"",
                    ""expectedControlType"": ""Vector2"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Use"",
                    ""type"": ""Button"",
                    ""id"": ""5e39b801-12d9-4f4a-8e03-4fa5a311c7c7"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""PutDown"",
                    ""type"": ""Button"",
                    ""id"": ""09840fd3-f96e-4366-8b2d-caca59c0702c"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Teleport"",
                    ""type"": ""Button"",
                    ""id"": ""e94ba19d-4b51-4c81-8c44-a2886f36028c"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""cdd9989f-8ba9-43dd-9887-b3f622766276"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": ""Press(behavior=2)"",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""PickUp"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""5d70b35f-fb7a-48bb-8111-7d20060f445b"",
                    ""path"": ""<Mouse>/delta"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""MouseLook"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""5322fb5e-5e1d-43d8-bb07-2399758c366b"",
                    ""path"": ""<Keyboard>/e"",
                    ""interactions"": ""Press(behavior=2)"",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Use"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""93f1b05e-ea6a-4a6c-983b-eb896fb94a6b"",
                    ""path"": ""<Mouse>/rightButton"",
                    ""interactions"": ""Press(behavior=2)"",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""PutDown"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""8dee03c1-36a0-47ea-badb-52683815f828"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": ""Press(behavior=2)"",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Teleport"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        },
        {
            ""name"": ""CharacterControlsVR"",
            ""id"": ""b53bd604-c272-4526-8c91-24478389cc2f"",
            ""actions"": [
                {
                    ""name"": ""Teleport"",
                    ""type"": ""Button"",
                    ""id"": ""78235b33-a2a1-43bf-9695-fade98d31014"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""18e732c3-9258-4f54-b423-bedd90573495"",
                    ""path"": ""<XRSimulatedController>/triggerButton"",
                    ""interactions"": ""Press(behavior=2)"",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Teleport"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": []
}");
        // CharacterControls
        m_CharacterControls = asset.FindActionMap("CharacterControls", throwIfNotFound: true);
        m_CharacterControls_PickUp = m_CharacterControls.FindAction("PickUp", throwIfNotFound: true);
        m_CharacterControls_MouseLook = m_CharacterControls.FindAction("MouseLook", throwIfNotFound: true);
        m_CharacterControls_Use = m_CharacterControls.FindAction("Use", throwIfNotFound: true);
        m_CharacterControls_PutDown = m_CharacterControls.FindAction("PutDown", throwIfNotFound: true);
        m_CharacterControls_Teleport = m_CharacterControls.FindAction("Teleport", throwIfNotFound: true);
        // CharacterControlsVR
        m_CharacterControlsVR = asset.FindActionMap("CharacterControlsVR", throwIfNotFound: true);
        m_CharacterControlsVR_Teleport = m_CharacterControlsVR.FindAction("Teleport", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    // CharacterControls
    private readonly InputActionMap m_CharacterControls;
    private ICharacterControlsActions m_CharacterControlsActionsCallbackInterface;
    private readonly InputAction m_CharacterControls_PickUp;
    private readonly InputAction m_CharacterControls_MouseLook;
    private readonly InputAction m_CharacterControls_Use;
    private readonly InputAction m_CharacterControls_PutDown;
    private readonly InputAction m_CharacterControls_Teleport;
    public struct CharacterControlsActions
    {
        private @PlayerInput m_Wrapper;
        public CharacterControlsActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
        public InputAction @PickUp => m_Wrapper.m_CharacterControls_PickUp;
        public InputAction @MouseLook => m_Wrapper.m_CharacterControls_MouseLook;
        public InputAction @Use => m_Wrapper.m_CharacterControls_Use;
        public InputAction @PutDown => m_Wrapper.m_CharacterControls_PutDown;
        public InputAction @Teleport => m_Wrapper.m_CharacterControls_Teleport;
        public InputActionMap Get() { return m_Wrapper.m_CharacterControls; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(CharacterControlsActions set) { return set.Get(); }
        public void SetCallbacks(ICharacterControlsActions instance)
        {
            if (m_Wrapper.m_CharacterControlsActionsCallbackInterface != null)
            {
                @PickUp.started -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnPickUp;
                @PickUp.performed -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnPickUp;
                @PickUp.canceled -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnPickUp;
                @MouseLook.started -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnMouseLook;
                @MouseLook.performed -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnMouseLook;
                @MouseLook.canceled -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnMouseLook;
                @Use.started -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnUse;
                @Use.performed -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnUse;
                @Use.canceled -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnUse;
                @PutDown.started -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnPutDown;
                @PutDown.performed -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnPutDown;
                @PutDown.canceled -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnPutDown;
                @Teleport.started -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnTeleport;
                @Teleport.performed -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnTeleport;
                @Teleport.canceled -= m_Wrapper.m_CharacterControlsActionsCallbackInterface.OnTeleport;
            }
            m_Wrapper.m_CharacterControlsActionsCallbackInterface = instance;
            if (instance != null)
            {
                @PickUp.started += instance.OnPickUp;
                @PickUp.performed += instance.OnPickUp;
                @PickUp.canceled += instance.OnPickUp;
                @MouseLook.started += instance.OnMouseLook;
                @MouseLook.performed += instance.OnMouseLook;
                @MouseLook.canceled += instance.OnMouseLook;
                @Use.started += instance.OnUse;
                @Use.performed += instance.OnUse;
                @Use.canceled += instance.OnUse;
                @PutDown.started += instance.OnPutDown;
                @PutDown.performed += instance.OnPutDown;
                @PutDown.canceled += instance.OnPutDown;
                @Teleport.started += instance.OnTeleport;
                @Teleport.performed += instance.OnTeleport;
                @Teleport.canceled += instance.OnTeleport;
            }
        }
    }
    public CharacterControlsActions @CharacterControls => new CharacterControlsActions(this);

    // CharacterControlsVR
    private readonly InputActionMap m_CharacterControlsVR;
    private ICharacterControlsVRActions m_CharacterControlsVRActionsCallbackInterface;
    private readonly InputAction m_CharacterControlsVR_Teleport;
    public struct CharacterControlsVRActions
    {
        private @PlayerInput m_Wrapper;
        public CharacterControlsVRActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
        public InputAction @Teleport => m_Wrapper.m_CharacterControlsVR_Teleport;
        public InputActionMap Get() { return m_Wrapper.m_CharacterControlsVR; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(CharacterControlsVRActions set) { return set.Get(); }
        public void SetCallbacks(ICharacterControlsVRActions instance)
        {
            if (m_Wrapper.m_CharacterControlsVRActionsCallbackInterface != null)
            {
                @Teleport.started -= m_Wrapper.m_CharacterControlsVRActionsCallbackInterface.OnTeleport;
                @Teleport.performed -= m_Wrapper.m_CharacterControlsVRActionsCallbackInterface.OnTeleport;
                @Teleport.canceled -= m_Wrapper.m_CharacterControlsVRActionsCallbackInterface.OnTeleport;
            }
            m_Wrapper.m_CharacterControlsVRActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Teleport.started += instance.OnTeleport;
                @Teleport.performed += instance.OnTeleport;
                @Teleport.canceled += instance.OnTeleport;
            }
        }
    }
    public CharacterControlsVRActions @CharacterControlsVR => new CharacterControlsVRActions(this);
    public interface ICharacterControlsActions
    {
        void OnPickUp(InputAction.CallbackContext context);
        void OnMouseLook(InputAction.CallbackContext context);
        void OnUse(InputAction.CallbackContext context);
        void OnPutDown(InputAction.CallbackContext context);
        void OnTeleport(InputAction.CallbackContext context);
    }
    public interface ICharacterControlsVRActions
    {
        void OnTeleport(InputAction.CallbackContext context);
    }
}
