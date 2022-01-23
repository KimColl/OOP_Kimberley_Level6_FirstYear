using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    //static onstance of type player script which allows to be accessed only from the Player script and not from the other script
    private static Player _playerInstance;

    private Rigidbody2D playerRigidBody;

    private BoxCollider2D playerBoxCollider;

    [SerializeField] private LayerMask groundMask;

    //public static Player PlayerInstance
    //{
    //    get { return _playerInstance; }
    //}

    // is always called before the void Start() Method
    private void Awake()
    {
        playerRigidBody= transform.GetComponent<Rigidbody2D>();
        playerBoxCollider = transform.GetComponent<BoxCollider2D>();
        if (_playerInstance != null && _playerInstance != this)
        {
            Destroy(this.gameObject);
            return;
        }
        _playerInstance = this;
        //sets this so the player will be destroyed when changing from one scene to another. 
        DontDestroyOnLoad(this.gameObject);
    }

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

        if (Ground() && Input.GetKeyDown(KeyCode.Space))
        {
            float playerVelocity = 7f;
            playerRigidBody.velocity = Vector2.up * playerVelocity;
        }
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

    private bool Ground()
    {
        RaycastHit2D groundRayCast = Physics2D.BoxCast(playerBoxCollider.bounds.center, playerBoxCollider.bounds.size, 0f, Vector2.down * .2f, groundMask);
        return groundRayCast.collider != null;
    }

    
}
