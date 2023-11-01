using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LiquidMinigameMLMarkings : MonoBehaviour
{
    public LiquidTriggerScript liquidScript;
    public GameObject mlMarkingPrefab;
    [Range(2, 10)]
    public int numMarkings;

    // Start is called before the first frame update
    void Start()
    {
        UpdateMarkings();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void UpdateMarkings()
    {
        if (liquidScript == null || mlMarkingPrefab == null) return;

        while (transform.childCount < numMarkings)
        {
            Instantiate(mlMarkingPrefab, transform);
        }

        int childCount = transform.childCount;

        while (childCount > numMarkings)
        {
            Destroy(transform.GetChild(childCount-1));
            childCount--;
        }

        float maxVal = liquidScript.maxFill;

        float height = GetComponent<RectTransform>().rect.height;
        float width = GetComponent<RectTransform>().rect.width;

        for(int i = 0; i < numMarkings; i++)
        {
            var child = transform.GetChild(i);
            child.GetComponent<TextMeshProUGUI>().text = $"{maxVal * (i / (numMarkings - 1f))} ml -";
            var childRect = child.GetComponent<RectTransform>();
            childRect.pivot = new Vector2(0, 0.5f);
            childRect.sizeDelta = new Vector2(width, childRect.rect.height);
            childRect.anchoredPosition = new Vector2(childRect.anchoredPosition.x, height * (i / (numMarkings - 1f)));

        }
    }
}
