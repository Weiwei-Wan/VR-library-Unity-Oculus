using Fusion.XR.Shared.Rig;
using UnityEngine;
using UnityEngine.Events;


namespace Fusion.XR.Shared
{
    /**
     * 
     * Script to display an overlay UI to select desktop or VR mode, and active the associated rig, alongside the connexion component
     * 
     **/

    public class RigSelection : MonoBehaviour
    {
        public UnityEvent OnSelectRig;

        public GameObject connexionHandler;
        public HardwareRig vrRig;
        public HardwareRig desktopRig;
        Camera rigSelectionCamera;

        public bool forceVROnAndroid = true;

        public enum Mode
        {
            SelectedByUIAndPref,
            ForceVR,
            ForceDesktop
        }
        public Mode mode = Mode.SelectedByUIAndPref;

        private void Awake()
        {
            rigSelectionCamera = GetComponentInChildren<Camera>();
            connexionHandler.gameObject.SetActive(false);
            vrRig.gameObject.SetActive(false);
            desktopRig.gameObject.SetActive(false);

#if !UNITY_EDITOR && UNITY_ANDROID
            if (forceVROnAndroid)
            {
                EnableVRRig();
                return;
            }
#endif
            if (mode == Mode.ForceVR)
            {
                EnableVRRig();
                return;
            }
            if (mode == Mode.ForceDesktop)
            {
                EnableDesktopRig();
                return;
            }


            var prefMode = PlayerPrefs.GetString("RigMode");
            if (prefMode == "VR") EnableVRRig();
            if (prefMode == "Desktop") EnableDesktopRig();
            if (prefMode != "")
            {
                PlayerPrefs.SetString("RigMode", "");
                PlayerPrefs.Save();
            }
        }

        private void OnGUI()
        {
            GUILayout.BeginArea(new Rect(5, 5, Screen.width - 10, Screen.height - 10));
            {
                GUILayout.BeginVertical(GUI.skin.window);
                {

                    if (GUILayout.Button("VR"))
                    {
                        EnableVRRig();
                    }
                    if (GUILayout.Button("Desktop"))
                    {
                        EnableDesktopRig();
                    }
                }
                GUILayout.EndVertical();
            }
            GUILayout.EndArea();
        }

        void EnableVRRig()
        {
            gameObject.SetActive(false);
            vrRig.gameObject.SetActive(true);
            OnRigSelected();
        }
        void EnableDesktopRig()
        {
            gameObject.SetActive(false);
            desktopRig.gameObject.SetActive(true);
            OnRigSelected();
        }

        void OnRigSelected()
        {
            connexionHandler.gameObject.SetActive(true);
            if (OnSelectRig != null) OnSelectRig.Invoke();
            if (rigSelectionCamera) rigSelectionCamera.gameObject.SetActive(false);
        }
    }
}