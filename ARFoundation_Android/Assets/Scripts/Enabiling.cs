using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Enabiling : MonoBehaviour
{
    public GameObject bal;
    public GameObject bal1;
    public GameObject bal2;
    public GameObject bal3;
    public GameObject bal4;

    public GameObject arw1;
    public GameObject arw2;
    public GameObject arw3;
    public GameObject arw4;

    public GameObject check;
    public GameObject check1;
    public GameObject check2;
    public GameObject check3;
    public GameObject check4;
    public GameObject winse;

    // Update is called once per frame
    void Update()
    {
        if(bal==null) {
            check.gameObject.SetActive(true);
            arw1.gameObject.SetActive(true);
        }
        

        if(bal1==null) {
            check1.gameObject.SetActive(true);
            arw2.gameObject.SetActive(true);
        }
        
        if(bal2==null) {
            check2.gameObject.SetActive(true);
            arw3.gameObject.SetActive(true);
        }
        
        
        if(bal3==null) {
            check3.gameObject.SetActive(true);
            arw4.gameObject.SetActive(true);
        }
        
        if(bal4==null) {
            check4.gameObject.SetActive(true);
                            
        }

        if(bal==null && bal1==null && bal2==null && bal3==null && bal4==null) {
            winse.gameObject.SetActive(true);
        }
    }
}
