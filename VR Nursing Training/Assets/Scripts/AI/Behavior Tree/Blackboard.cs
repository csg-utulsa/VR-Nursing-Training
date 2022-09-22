using UnityEngine;

[System.Serializable]
public class Blackboard
{
    public Vector3 moveToPosition;
    public GameObject moveToObject;

    //Test variable
    public int debugLogsPrinted = 0;
    public float approachDistance = 1f;
    public float animationBaseSpeed = 0.1f;

    float _radius = 1;


    /// <summary>
    /// gets the radius the enemy should remain within from the 
    /// </summary>
    /// <param name="radius">   </param>
    public void SetRadius(float radius) => _radius = radius;

    public float GetOpponentDistance()
    {
        return _distanceToOpponent;
    }

    public float GetRadius() => _radius;
    [SerializeField] float _distanceToOpponent;
    public void SetDistanceToOpponent(float distance)
    {
        _distanceToOpponent = distance;
    }




}