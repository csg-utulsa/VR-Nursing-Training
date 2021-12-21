// GENERATED AUTOMATICALLY FROM 'Assets/Scripts/PlayerInput.inputactions'

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
            ""name"": ""CharacterControls3D"",
            ""id"": ""b1462320-1ba9-4ce9-9c8c-4a2ac8520f00"",
            ""actions"": [
                {
                    ""name"": ""Click"",
                    ""type"": ""Value"",
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
                    ""name"": ""Interact"",
                    ""type"": ""Button"",
                    ""id"": ""5e39b801-12d9-4f4a-8e03-4fa5a311c7c7"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Letgo"",
                    ""type"": ""Button"",
                    ""id"": ""09840fd3-f96e-4366-8b2d-caca59c0702c"",
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
                    ""action"": ""Click"",
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
                    ""id"": ""b33762df-f0b5-487d-9004-a24b0b17287e"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": ""Press(behavior=2)"",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Interact"",
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
                    ""action"": ""Letgo"",
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
        // CharacterControls3D
        m_CharacterControls3D = asset.FindActionMap("CharacterControls3D", throwIfNotFound: true);
        m_CharacterControls3D_Click = m_CharacterControls3D.FindAction("Click", throwIfNotFound: true);
        m_CharacterControls3D_MouseLook = m_CharacterControls3D.FindAction("MouseLook", throwIfNotFound: true);
        m_CharacterControls3D_Interact = m_CharacterControls3D.FindAction("Interact", throwIfNotFound: true);
        m_CharacterControls3D_Letgo = m_CharacterControls3D.FindAction("Letgo", throwIfNotFound: true);
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

    // CharacterControls3D
    private readonly InputActionMap m_CharacterControls3D;
    private ICharacterControls3DActions m_CharacterControls3DActionsCallbackInterface;
    private readonly InputAction m_CharacterControls3D_Click;
    private readonly InputAction m_CharacterControls3D_MouseLook;
    private readonly InputAction m_CharacterControls3D_Interact;
    private readonly InputAction m_CharacterControls3D_Letgo;
    public struct CharacterControls3DActions
    {
        private @PlayerInput m_Wrapper;
        public CharacterControls3DActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
        public InputAction @Click => m_Wrapper.m_CharacterControls3D_Click;
        public InputAction @MouseLook => m_Wrapper.m_CharacterControls3D_MouseLook;
        public InputAction @Interact => m_Wrapper.m_CharacterControls3D_Interact;
        public InputAction @Letgo => m_Wrapper.m_CharacterControls3D_Letgo;
        public InputActionMap Get() { return m_Wrapper.m_CharacterControls3D; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(CharacterControls3DActions set) { return set.Get(); }
        public void SetCallbacks(ICharacterControls3DActions instance)
        {
            if (m_Wrapper.m_CharacterControls3DActionsCallbackInterface != null)
            {
                @Click.started -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnClick;
                @Click.performed -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnClick;
                @Click.canceled -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnClick;
                @MouseLook.started -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnMouseLook;
                @MouseLook.performed -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnMouseLook;
                @MouseLook.canceled -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnMouseLook;
                @Interact.started -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnInteract;
                @Interact.performed -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnInteract;
                @Interact.canceled -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnInteract;
                @Letgo.started -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnLetgo;
                @Letgo.performed -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnLetgo;
                @Letgo.canceled -= m_Wrapper.m_CharacterControls3DActionsCallbackInterface.OnLetgo;
            }
            m_Wrapper.m_CharacterControls3DActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Click.started += instance.OnClick;
                @Click.performed += instance.OnClick;
                @Click.canceled += instance.OnClick;
                @MouseLook.started += instance.OnMouseLook;
                @MouseLook.performed += instance.OnMouseLook;
                @MouseLook.canceled += instance.OnMouseLook;
                @Interact.started += instance.OnInteract;
                @Interact.performed += instance.OnInteract;
                @Interact.canceled += instance.OnInteract;
                @Letgo.started += instance.OnLetgo;
                @Letgo.performed += instance.OnLetgo;
                @Letgo.canceled += instance.OnLetgo;
            }
        }
    }
    public CharacterControls3DActions @CharacterControls3D => new CharacterControls3DActions(this);

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
    public interface ICharacterControls3DActions
    {
        void OnClick(InputAction.CallbackContext context);
        void OnMouseLook(InputAction.CallbackContext context);
        void OnInteract(InputAction.CallbackContext context);
        void OnLetgo(InputAction.CallbackContext context);
    }
    public interface ICharacterControlsVRActions
    {
        void OnTeleport(InputAction.CallbackContext context);
    }
}
