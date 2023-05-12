using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class ChangeSkyBox : MonoBehaviour
{
    // Toggle group
    public Toggle[] Toggles;

    // skybox
    public Material[] skyMats;

    void Awake()
    {
        Toggles[0].onValueChanged.AddListener(OnValueChange0);
        Toggles[1].onValueChanged.AddListener(OnValueChange1);
        Toggles[2].onValueChanged.AddListener(OnValueChange2);
        Toggles[3].onValueChanged.AddListener(OnValueChange3);
        Toggles[4].onValueChanged.AddListener(OnValueChange4);
    }
    
    private void Start()
    {       
        OnValueChange0(Toggles[0].isOn);
        OnValueChange1(Toggles[1].isOn);
        OnValueChange2(Toggles[2].isOn);
        OnValueChange3(Toggles[3].isOn);
        OnValueChange4(Toggles[4].isOn);
    }

    // listener
    // change skybox
    void OnValueChange0(bool active)
    {
        RenderSettings.skybox = skyMats[0];
    }
    void OnValueChange1(bool active)
    {
        RenderSettings.skybox = skyMats[1];
    }
    void OnValueChange2(bool active)
    {
        RenderSettings.skybox = skyMats[2];
    }
    void OnValueChange3(bool active)
    {
        RenderSettings.skybox = skyMats[3];
    }
    void OnValueChange4(bool active)
    {
        RenderSettings.skybox = skyMats[4];
    }

    // Update is called once per frame
    void Update()
    {   
    }
}


