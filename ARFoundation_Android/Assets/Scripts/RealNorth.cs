using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class RealNorth : MonoBehaviour {
    
    public GameObject cam;

    void Start() { 
        Input.location.Start();
        Input.compass.enabled = true; 
    } 

    void Update () {
        NorthhDirection();
    }

    public void NorthhDirection () 
    {
        
        Quaternion cameraRotation = Quaternion.Euler(0, 0, cam.transform.rotation.eulerAngles.z);
        Quaternion compass = Quaternion.Euler(0, 0, -Input.compass.magneticHeading);

        Quaternion north = Quaternion.Euler(0, 0, cameraRotation.eulerAngles.z + compass.eulerAngles.z);
        transform.rotation = north;
    }
}

