using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
public class MouseLook3D : MonoBehaviour
{
    float xRotation = 0f;
    public Transform playerBody;
    public float mouseSensitivity = 100f;
    public static bool flag = true;
    PlayerInput input;

    Vector2 mouseLook;

    private void Awake()
    {
        input = new PlayerInput();

        input.CharacterControls.MouseLook.performed += ctx => mouseLook = ctx.ReadValue<Vector2>();

    }

    private void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        //LiquidTriggerScript.measureCanvas = liquidCanvas;
    }

    // Update is called once per frame
    void Update()
    {
        if (flag)
        {
            float mouseX = mouseLook.x * mouseSensitivity; //* Time.deltaTime;
            float mouseY = mouseLook.y * mouseSensitivity;// * Time.deltaTime;

            xRotation -= mouseY;
            xRotation = Mathf.Clamp(xRotation, -90f, 90f);

            transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
            playerBody.Rotate(Vector3.up * mouseX);

            mouseLook = new Vector2(0f, 0f);
        }
        
    }

    private void OnEnable()
    {
        input.CharacterControls.Enable();
    }

    private void OnDisable()
    {
        input.CharacterControls.Disable();
    }
}
