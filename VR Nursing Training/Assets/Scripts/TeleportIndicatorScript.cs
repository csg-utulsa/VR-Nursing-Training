using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportIndicatorScript : MonoBehaviour
{
    [SerializeField] private GameObject indicatorZone;
    private int cooldownMax = 3;
    private int cooldown = 0;

    public void Update()
    {
        if (cooldown > 0) cooldown--;
        else indicatorActive(false);
    }

    public void indicatorActive(bool active)
    {
        if (active) cooldown = cooldownMax;
        indicatorZone.SetActive(active);
    }
}
