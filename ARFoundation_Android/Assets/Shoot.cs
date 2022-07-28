using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shoot : MonoBehaviour
{

    public GameObject arCamera;
    public GameObject explosion;

    RaycastHit hit;

    void Update()
    {
        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            if(Physics.Raycast(arCamera.transform.position, arCamera.transform.forward, out hit))
            {
                if(hit.transform.tag == "Balloon")
                {
                    Destroy(hit.transform.gameObject);
                    Destroy(gameObject);
                    Instantiate(explosion);
                    Destroy(explosion, 2f);  // nothing gets left behind
                }
            }
        }
    }
}


