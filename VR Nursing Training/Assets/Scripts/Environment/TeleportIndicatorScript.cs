using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TeleportIndicatorScript : MonoBehaviour
{
    [SerializeField] private GameObject indicatorZone;
    //[SerializeField] private Material indicatorMaterial;
    [SerializeField] private GameObject indicatorText;
    [SerializeField] private string zoneName;
    private TextMeshProUGUI text;
    private bool useCooldown = true;
    private int cooldownMax = 3;
    private int cooldown = 0;
    private Vector3 direction;

    // For phasing animation
   /* private Color matColor = Color.green;
    private float alphaStart = 0.5f;
    private float alphaMax = 0.6f;
    private float alphaMin = 0.4f;
    private float alphaChange = 0.0003f;
    private float alphaDir = 1;*/

    public void Awake()
    {
        text = indicatorText.GetComponent<TextMeshProUGUI>();
        text.text = zoneName;
        /*matColor.a = alphaStart;
        indicatorMaterial.color = matColor;*/
    }
    public void Update()
    {
        if (useCooldown)
        {
            if (cooldown > 0) cooldown--;
            //else indicatorActive(false);
        }
        direction = (transform.position- Camera.main.transform.position).normalized;
        direction.y = 0;
        if (direction != Vector3.zero) indicatorText.gameObject.transform.rotation = Quaternion.LookRotation(direction);
        /*if (indicatorZone.activeSelf)
        {
            matColor.a += alphaChange * alphaDir;
            if (matColor.a >= alphaMax)
            {
                matColor.a = alphaMax;
                alphaDir = -1;
            }
            else if (matColor.a <= alphaMin)
            {
                matColor.a = alphaMin;
                alphaDir = 1;
            }
            indicatorMaterial.color = matColor;
        }*/
    }

    public void indicatorActive(bool active)
    {
        useCooldown = true;
        if (active) cooldown = cooldownMax;
        else cooldown = 0;
        indicatorZone.SetActive(active);
        //if (!active) matColor.a = alphaStart;
    }

    public void indicatorActiveVR(bool active)
    {
        useCooldown = false;
        indicatorZone.SetActive(active);
        //if (!active) matColor.a = alphaStart;
    }
}
