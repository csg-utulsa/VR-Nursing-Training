using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MedLabelScript : MonoBehaviour
{
    [SerializeField] private GameObject labelText;
    [SerializeField] private GameObject labelIcon;
    [SerializeField] private Sprite iconSprite;
    [SerializeField] private GameObject medicineParent;
    public bool useText = false;
    private TextMeshProUGUI text;
    private bool useCooldown = false;
    private int cooldownMax = 3;
    private int cooldown = 0;
    private Vector3 direction;

    public void Awake()
    {
        if (useText)
        {
            text = labelText.GetComponent<TextMeshProUGUI>();
            text.text = medicineParent.GetComponent<InteractableScript>().type;
        }
        else
        {
            labelIcon.GetComponent<SpriteRenderer>().sprite = iconSprite;
        }
        labelText.SetActive(false);
        labelIcon.SetActive(false);
    }
    public void Update()
    {
        if (useCooldown)
        {
            if (cooldown > 0) cooldown--;
            else labelActive(false);
        }
        direction = (transform.position - Camera.main.transform.position).normalized;
        if (direction != Vector3.zero) labelText.gameObject.transform.rotation = Quaternion.LookRotation(direction);
        if (direction != Vector3.zero) labelIcon.gameObject.transform.rotation = Quaternion.LookRotation(direction);
        direction.y = 0;
        gameObject.transform.rotation = Quaternion.LookRotation(direction);
    }

    public void labelActive(bool active)
    {
        useCooldown = true;
        if (active) cooldown = cooldownMax;
        else cooldown = 0;
        if (useText) labelText.SetActive(active);
        else labelIcon.SetActive(active);
    }

    public void labelActiveVR(bool active)
    {
        useCooldown = false;
        if (useText) labelText.SetActive(active);
        else labelIcon.SetActive(active);
    }
}