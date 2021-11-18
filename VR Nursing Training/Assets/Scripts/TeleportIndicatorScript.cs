using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TeleportIndicatorScript : MonoBehaviour
{
    [SerializeField] private GameObject indicatorZone;
    [SerializeField] private GameObject indicatorText;
    [SerializeField] private string zoneName;
    private TextMeshProUGUI text;
    private int cooldownMax = 3;
    private int cooldown = 0;
    private Vector3 direction;

    public void Awake()
    {
        text = indicatorText.GetComponent<TextMeshProUGUI>();
        text.text = zoneName;
    }
    public void Update()
    {
        if (cooldown > 0) cooldown--;
        else indicatorActive(false);
        direction = (transform.position- Camera.main.transform.position).normalized;
        direction.y = 0;
        if (direction != Vector3.zero) indicatorText.gameObject.transform.rotation = Quaternion.LookRotation(direction);
    }

    public void indicatorActive(bool active)
    {
        if (active) cooldown = cooldownMax;
        else cooldown = 0;
        indicatorZone.SetActive(active);
    }
}
