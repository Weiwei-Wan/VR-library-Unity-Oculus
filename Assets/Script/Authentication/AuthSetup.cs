using UnityEngine;
using Firebase.Extensions;

public class AuthSetup : MonoBehaviour
{
  public AuthManager authManager;
  private Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;

  // Start is called before the first frame update
  // When the app starts, check to make sure that we have
  // the required dependencies to use Firebase, and if not,
  // add them if possible.
  void Start()
  {
  //   Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
  //   {
  //     dependencyStatus = task.Result;
  //     if (dependencyStatus == Firebase.DependencyStatus.Available)
  //     {
  //       authManager.InitializeFirebase();
  //     }
  //     else
  //     {
  //       Debug.LogError(
  //         "Could not resolve all Firebase dependencies: " + dependencyStatus);
  //     }
  //   });
  // }
  Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                // Create and hold a reference to your FirebaseApp,
                // where app is a Firebase.FirebaseApp property of your application class.
                // app = Firebase.FirebaseApp.DefaultInstance;
                authManager.InitializeFirebase();

                // Set a flag here to indicate whether Firebase is ready to use by your app.
                // Firebase.Crashlytics.Crashlytics.IsCrashlyticsCollectionEnabled = true;
            }
            else
            {
                UnityEngine.Debug.LogError(System.String.Format(
                  "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }
        });
  }
}