using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollBackground : MonoBehaviour
{
    [SerializeField] float scrollSpeedBackground = 0.02f;

    //movement offSet x = 0; y = 0
    //it will move x to the right and y will remain at its position 0
    Vector2 offSet;

    //the Material from the texture
    Material backgroundMaterial;

    // Start is called before the first frame update
    void Start()
    {
        //get the Material of the background from Renderer component which is Sky_Game1
        backgroundMaterial = GetComponent<Renderer>().material;

        //move in the x-axis at the given speed at 0.02f from left to right
        offSet = new Vector2(scrollSpeedBackground, 0f);
    }

    // Update is called once per frame
    void Update()
    {
        //to update at that offset
        //move the sky background to the right at 0.02f at every frame. 
        //move the texture of the material by offset every frame
        backgroundMaterial.mainTextureOffset += offSet * Time.deltaTime;
    }
}
