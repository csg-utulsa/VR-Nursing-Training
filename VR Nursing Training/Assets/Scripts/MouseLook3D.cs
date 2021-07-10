using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
public class MouseLook3D : MonoBehaviour
{
    float xRotation = 0f;
    public Transform playerBody;
    public float mouseSensitivity = 100f;

    PlayerInput input;

    Vector2 mouseLook;

    private void Awake()
    {
        input = new PlayerInput();

        input.CharacterControls3D.MouseLook.performed += ctx => mouseLook = ctx.ReadValue<Vector2>();

    }

    private void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
    }

    // Update is called once per frame
    void Update()
    {
        float mouseX = mouseLook.x * mouseSensitivity * Time.deltaTime;
        float mouseY = mouseLook.y * mouseSensitivity * Time.deltaTime;

        xRotation -= mouseY;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f);

        transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
        playerBody.Rotate(Vector3.up * mouseX);

        mouseLook = new Vector2(0f, 0f);
    }

    private void OnEnable()
    {
        input.CharacterControls3D.Enable();
    }

    private void OnDisable()
    {
        input.CharacterControls3D.Disable();
    }
}
