using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class TweetInterceptor : MonoBehaviour {

	object lockref = new object();

	volatile Queue<string> tweets = new Queue<string>();
	volatile Queue<string> usernames = new Queue<string>();

	Text[] texts = new Text[5];

	// Use this for initialization
	void Start () {
		GameObject[] gos = GameObject.FindGameObjectsWithTag ("Tweet");
		for (int i = 0; i < 5; i++) {
			texts[i] = gos[i].GetComponent<Text>();
		}

		IEnumerator coroutine = TweetUpdateCoroutine ();
		StartCoroutine (coroutine);
	}
	
	// Update is called once per frame
	void Update () {
	}

	void UpdateTweetsInDisplay() {
		// Both lists should be small so this isn't end-x§of-the-world bad. 
		lock (lockref) {
			Queue<string> tweets_ro = new Queue<string> (tweets);
			Queue<string> usernames_ro = new Queue<string> (usernames);
			for (int i = 0; i < 5; i++) {
				Debug.Log (tweets_ro.Dequeue());
				texts [i].text = usernames_ro.Dequeue() + ": " + tweets_ro.Dequeue();
			}
			Debug.Log("----");
			tweets = tweets_ro;
			usernames = usernames_ro;
		}

	}

	// Adds tweets to the collection which will then be overlayed in some kind of an intelligent manner
	public void UpdateTweetsToDisplay(string username, string tweet) {
		lock (lockref) {
			tweets.Enqueue (tweet);
			usernames.Enqueue (username);
		}
	}

	IEnumerator TweetUpdateCoroutine() {
		for(;;) {
			UpdateTweetsInDisplay();
			// This is far from optimal but it's a good place to start, maybe? 
			yield return new WaitForSeconds(10.0f);
		}
	}
}
