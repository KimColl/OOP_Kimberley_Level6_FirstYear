using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        PlayerMovementBoundaries();
    }

    // Update is called once per frame
    void Update()
    {
        PlayerMove();
    }

    private void PlayerMove()
    {
        //adjust its contents on what i put in it
        //var changes its variable type
        //depending on what I save in it
        //deltaX means difference x
        //deltaX will have the difference in the x-axis which the Player moves
        var deltaX = Input.GetAxis("Horizontal") * Time.deltaTime * MoveSpeed();

        //transform position of my player
        //newXPos = current x-position + difference in x
        var newXPos = transform.position.x + deltaX;

        //clamp this position newXPos between 0 and 1 on the camera view and not below or more than 0 or 1
        //clamp the position between 0 and 1 and update the new position
        //clamps the newXPos between xMin and xMax
        newXPos = Mathf.Clamp(newXPos, GameData.XMin(), GameData.XMax());

        //Time.deltaTime it will slow the computer down

        //the same as above but in the y-axis
        var deltaY = Input.GetAxis("Vertical") * Time.deltaTime * MoveSpeed();
        var newYPos = transform.position.y + deltaY;
        //clamps the newYPos between yMin and yMax
        newYPos = Mathf.Clamp(newYPos, GameData.YMin(), GameData.YMax());

        //move the Player ship to the newXPos 
        //update the position of the Player
        this.transform.position = new Vector2(newXPos, newYPos);

    }

    public static float MoveSpeed()
    {
        float moveSpeed = 10f;
        return moveSpeed;
    }

    private void PlayerMovementBoundaries()
    {
        GameData.XMin();
        GameData.XMax();
        GameData.YMin();
        GameData.YMax();
    }
}
