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
    private bool isActive = false;
    private Vector3 direction;

    // variables for scaling down label when above medicine
    private float horOuterBuffer = 0.35f; // horizontal distance at which label should start shrinking
    private float horInnerBuffer = 0.25f; // horizontal distance at which label should hit max shrink
    private float vertOuterBuffer = 0.75f; // vertical distance at which label should start shrinking 
    private float vertInnerBuffer = 0.45f; // distance at which label disappears entirely
    private float minScale = 0.5f; // minimum scale of label
    private Vector3 originalScale; // reference to original label scale

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

        GetComponentInParent<DetectLooks>().lookTime = 0.2f;
        GetComponentInParent<DetectLooks>().lookStarted.AddListener(() => labelActive(true));
        GetComponentInParent<DetectLooks>().lookStopped.AddListener(() => labelActive(false));

        if (useText) originalScale = labelText.transform.localScale;
        else originalScale = labelIcon.transform.localScale;
    }

    public void Update()
    {
        direction = (transform.position - Camera.main.transform.position).normalized;
        if (direction != Vector3.zero) labelText.gameObject.transform.rotation = Quaternion.LookRotation(direction);
        if (direction != Vector3.zero) labelIcon.gameObject.transform.rotation = Quaternion.LookRotation(direction);
        direction.y = 0;
        gameObject.transform.rotation = Quaternion.LookRotation(direction);

        // shrink/hide label if above medicine
        if (isActive)
        {
            if (useText) labelText.SetActive(true);
            else labelIcon.SetActive(true);

            float horDistance = Vector2.Distance(new Vector2(transform.position.x, transform.position.z), new Vector2(Camera.main.transform.position.x, Camera.main.transform.position.z));
            float vertDistance = Mathf.Abs(transform.position.y - Camera.main.transform.position.y);

            if (horDistance < horOuterBuffer)
            {
                // make label disappear inside inner buffer
                if (vertDistance < vertInnerBuffer)
                {
                    if (useText) labelText.SetActive(false);
                    else labelIcon.SetActive(false);
                }
                else
                {
                    // make label shrink inside outer buffer
                    if (vertDistance < vertOuterBuffer)
                    {
                        float scaleFactor = (1 - minScale) * ((vertDistance - vertInnerBuffer) / (vertOuterBuffer - vertInnerBuffer)) + minScale;
                        if (horDistance > horInnerBuffer) scaleFactor += (1 - scaleFactor) * ((horDistance - horInnerBuffer) / (horOuterBuffer - horInnerBuffer));
                        if (useText) labelText.transform.localScale = originalScale * scaleFactor;
                        else labelIcon.transform.localScale = originalScale * scaleFactor;
                    }
                    // reset label scale if outside buffer
                    else
                    {
                        if (useText) labelText.transform.localScale = originalScale;
                        else labelIcon.transform.localScale = originalScale;
                    }
                }
            }
        }
        else
        {
            if (useText) labelText.transform.localScale = originalScale;
            else labelIcon.transform.localScale = originalScale;
        }
            
    }

    public void labelActive(bool active)
    {
        isActive = active;
        if (useText) labelText.SetActive(active);
        else labelIcon.SetActive(active);
    }
}