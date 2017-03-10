using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Vuforia;

public class SplashLauncher : MonoBehaviour, ITrackableEventHandler {

	private TrackableBehaviour trackable;


	// Use this for initialization
	void Start () {
		trackable = GetComponent<TrackableBehaviour>();
		if (trackable)
		{
			trackable.RegisterTrackableEventHandler(this);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnTrackableStateChanged(
		TrackableBehaviour.Status previousStatus,
		TrackableBehaviour.Status newStatus)
	{
		if (newStatus == TrackableBehaviour.Status.DETECTED ||
			newStatus == TrackableBehaviour.Status.TRACKED ||
			newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
		{
			// Play audio when target is found
			SceneManager.LoadScene("Splash");
		}
	}   

}
