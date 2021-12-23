using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[RequireComponent(typeof(TextMeshPro))]

public class TutorialCartText : MonoBehaviour
{
    private TextMeshPro cartText = null;
    public GameObject tutorialCart = null;
    private double pillCountText = 0;
    private double liquidCountText = 0;

    private void Awake()
    {
        cartText = gameObject.GetComponent<TextMeshPro>();
    }

    private void Update()
    {
        if (tutorialCart != null)
        {
            //pillCountText = tutorialCart.getCurrentPills();
        }
    }
}
