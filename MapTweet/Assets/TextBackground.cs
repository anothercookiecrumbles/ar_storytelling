using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextBackground : MonoBehaviour {

	GameObject go; 
	Color colour; 

	// Use this for initialization
	void Start () {
		go = GameObject.FindGameObjectWithTag ("TweetText");
		colour = new Color(45, 164, 243, 1);
		Mesh mesh = (go.GetComponent(typeof(MeshFilter))as MeshFilter).mesh;
		Color[] colours = mesh.colors;
		for(int i = 0; i < colours.Length; i++) {
			colours[i] = colour;
		}
	}
	
	// Update is called once per frame
	void Update () {
	}

	void OnGUI(){
	}

}
