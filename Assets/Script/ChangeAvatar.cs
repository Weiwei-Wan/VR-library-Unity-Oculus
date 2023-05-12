using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class ChangeAvatar : MonoBehaviour
{
    public Toggle HasBeard;
    public GameObject beard1;
    public GameObject beard2;
    public GameObject hair;
    public GameObject eye;
    public GameObject head;
    public GameObject[] body;
    public GameObject cloth1;
    public GameObject cloth2;
    public Button ClothBtn;

    // Toggle group
    public Toggle[] TogHair;
    public Toggle[] TogBody;
    public Toggle[] TogEye;
    public Toggle[] TogFace;
    
    // materials
    public Material[] Mats;

    void Awake()
    {
        HasBeard.onValueChanged.AddListener(ChangeBeard);
        ClothBtn.onClick.AddListener(ChangeCloth);

        for (int i=0; i<TogHair.Length; i++) {
            TogHair[i].onValueChanged.AddListener(HairOnValueChange);
        }

        for (int i=0; i<TogBody.Length; i++) {
            TogBody[i].onValueChanged.AddListener(BodyOnValueChange);
        }

        for (int i=0; i<TogEye.Length; i++) {
            TogEye[i].onValueChanged.AddListener(EyeOnValueChange);
        }

        for (int i=0; i<TogFace.Length; i++) {
            TogFace[i].onValueChanged.AddListener(FaceOnValueChange);
        }
    }
     
    void Start()
    {
        TogHair[4].isOn = true;
        TogBody[3].isOn = true;
        TogEye[0].isOn = true;
        TogFace[3].isOn = true;
        cloth1.SetActive(false);
        cloth2.SetActive(false);
    }

    void ChangeBeard(bool active) {
        beard1.SetActive(!beard1.activeSelf);
        beard2.SetActive(!beard2.activeSelf);
    }

    void ChangeCloth() {
        if (!cloth1.activeSelf && !cloth2.activeSelf) {
            cloth1.SetActive(true);
        }
        else if (cloth1.activeSelf) {
            cloth1.SetActive(false);
            cloth2.SetActive(true);
        }
        else if (cloth2.activeSelf) {
            cloth1.SetActive(false);
            cloth2.SetActive(false);
        }
    }

    void HairOnValueChange(bool active)
    {
        for (int i=0; i<TogHair.Length; i++) {
            if (TogHair[i].isOn) {
                hair.GetComponent<SkinnedMeshRenderer>().material = Mats[i];
            }
        }
    }

    void BodyOnValueChange(bool active)
    {
        for (int i=0; i<TogBody.Length; i++) {
            if (TogBody[i].isOn) {
                foreach (GameObject b in body) {
                    b.GetComponent<SkinnedMeshRenderer>().material = Mats[i];
                }
            }
        }
    }

    void EyeOnValueChange(bool active)
    {
        for (int i=0; i<TogHair.Length; i++) {
            if (TogHair[i].isOn) {
                eye.GetComponent<SkinnedMeshRenderer>().material = Mats[i];
            }
        }
    }

    void FaceOnValueChange(bool active)
    {
        for (int i=0; i<TogFace.Length; i++) {
            if (TogFace[i].isOn) {
                head.GetComponent<SkinnedMeshRenderer>().material = Mats[i];
            }
        }
    }
}
