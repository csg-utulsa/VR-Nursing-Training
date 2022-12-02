using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

// DEPRECATED
public class MouseLook3D : MonoBehaviour
{
    /*float dXRotation = 0f;
    float dYRotation = 0f;
    public Transform playerBody;
    public float mouseSensitivity = 100f;
    public static bool flag = true;
    PlayerInput input;

   // Vector2 mouseLook;

    private void Awake()
    {
        //input = new PlayerInput();

        //input.CharacterControls.MouseLook.performed += ctx => mouseLook = ctx.ReadValue<Vector2>();
        //input.CharacterControls.MouseLook.performed += MouseLook;
    }

    private void Start()
    {
        //Cursor.lockState = CursorLockMode.Locked;
    }

    // Update is called once per frame
    void Update()
    {
        if (flag)
        {
            float mouseX = mouseLook.x * mouseSensitivity;
            float mouseY = mouseLook.y * mouseSensitivity;

            LRRotation += mouseX;
            UDRotation -= mouseY;
            UDRotation = Mathf.Clamp(UDRotation, -90f, 90f);

            transform.localRotation = Quaternion.Euler(UDRotation, LRRotation, 0f);
            //playerBody.Rotate(Vector3.up * mouseX);
        }
        
    }
    private void MouseLook(InputAction.CallbackContext args)
    {
        Vector2 mouseLook = args.ReadValue<Vector2>();

        dYRotation += mouseLook.x * mouseSensitivity;
        dXRotation -= mouseLook.y * mouseSensitivity;
        dXRotation = Mathf.Clamp(dXRotation, -90, 90);

        transform.rotation = Quaternion.Euler(dXRotation, dYRotation, 0f);
    }

    private void OnEnable()
    {
        input.CharacterControls.Enable();
    }

    private void OnDisable()
    {
        input.CharacterControls.Disable();
    }*/
}
