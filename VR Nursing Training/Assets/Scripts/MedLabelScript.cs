using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MedLabelScript : MonoBehaviour
{
    [SerializeField] private GameObject labelText;
    [SerializeField] private GameObject medicineParent;
    private TextMeshProUGUI text;
    private bool useCooldown = false;
    private int cooldownMax = 3;
    private int cooldown = 0;
    private Vector3 direction;

    public void Awake()
    {
        text = labelText.GetComponent<TextMeshProUGUI>();
        text.text = medicineParent.GetComponent<InteractableScript>().type;
    }
    public void Update()
    {
        if (useCooldown)
        {
            if (cooldown > 0) cooldown--;
            else labelActive(false);
        }
        direction = (transform.position - Camera.main.transform.position).normalized;
        direction.y = 0;
        if (direction != Vector3.zero) labelText.gameObject.transform.rotation = Quaternion.LookRotation(direction);
    }

    public void labelActive(bool active)
    {
        useCooldown = true;
        if (active) cooldown = cooldownMax;
        else cooldown = 0;
        labelText.SetActive(active);
    }

    public void labelActiveVR(bool active)
    {
        useCooldown = false;
        labelText.SetActive(active);
    }
}
