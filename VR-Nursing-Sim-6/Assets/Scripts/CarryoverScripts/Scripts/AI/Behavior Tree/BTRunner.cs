using UnityEngine;

public class BTRunner : MonoBehaviour
{
    public BehaviorTree tree;

    private void Awake()
    {

    }

    void Start()
    {
        tree = tree.Clone();
        //tree.Bind(ai);
    }

    void Update()
    {
        tree.Update();
    }

    public void RebindTree(BehaviorTree newTree)
    {
        tree = newTree;
        tree = tree.Clone();
        //tree.Bind(ai);
    }
}
