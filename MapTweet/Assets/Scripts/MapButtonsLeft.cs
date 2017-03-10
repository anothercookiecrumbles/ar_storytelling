using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapButtonsLeft : MonoBehaviour {

	public OnlineMaps map;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
	}

	public void OnTrumpTowerClicked () {
		map.SetPositionAndZoom (-73.9719f, 40.7602f, 15);
	}

	public void OnSatelliteViewClicked() {
		if (map.mapType == "google.satellite") {
			map.mapType = "google.relief";
		} else {
			map.mapType = "google.satellite";
		}
	}
}
