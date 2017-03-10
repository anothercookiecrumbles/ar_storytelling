using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TwitterTalker : MonoBehaviour {

	public TweetInterceptor ti; 

	// Use this for initialization
	void Start () {
		ti.UpdateTweetsToDisplay ("winter_is_coming", "He's on FIRE!!!! #CHIvsCLE");
	
		ti.UpdateTweetsToDisplay ("acookiecrumbles", "This is the most boring game ever #CHIvsCLE");
		ti.UpdateTweetsToDisplay ("winter_is_coming", "YES!!!! #CHIvsCLE");
		ti.UpdateTweetsToDisplay ("boo_hoo", "Striking");
		ti.UpdateTweetsToDisplay ("smod4real", "The final seal of the apocalypse has been opened. #Cubs #WorldSeries");
		ti.UpdateTweetsToDisplay ("AdamSerwer", "The last time the Cubs won the World Series, the Warriors had not yet blown a 3-1 lead in the NBA Final");
		ti.UpdateTweetsToDisplay ("Reds", "¯\\_(ツ)_/¯");
		ti.UpdateTweetsToDisplay ("FauxPelini", ".@Pontifex are you serious with the rain right now");
		ti.UpdateTweetsToDisplay("mrsanniemac", "Haven't seen this many stressed out white dudes since the Ashley Madison hack.");
		ti.UpdateTweetsToDisplay ("unknown", "Hey dude, big favor... I'm at the park, but PLEASE log into my Twitter and delete all my 3-1 memes from June.");
		ti.UpdateTweetsToDisplay("SBNation", "THE 3-1 TORCH HAS BEEN PASSED");
		ti.UpdateTweetsToDisplay ("ByTimReynolds", "This might not have been a great idea.");
	}
	
	// Update is called once per frame
	void Update () {
		ti.UpdateTweetsToDisplay ("acookiecrumbles", "This is the most boring game ever #CHIvsCLE");
		ti.UpdateTweetsToDisplay ("winter_is_coming", "YES!!!! #CHIvsCLE");
		ti.UpdateTweetsToDisplay ("boo_hoo", "Striking");
		ti.UpdateTweetsToDisplay ("smod4real", "The final seal of the apocalypse has been opened. #Cubs #WorldSeries");
		ti.UpdateTweetsToDisplay ("AdamSerwer", "The last time the Cubs won the World Series, the Warriors had not yet blown a 3-1 lead in the NBA Final");
		ti.UpdateTweetsToDisplay ("Reds", "¯\\_(ツ)_/¯");
		ti.UpdateTweetsToDisplay ("FauxPelini", ".@Pontifex are you serious with the rain right now");
		ti.UpdateTweetsToDisplay("mrsanniemac", "Haven't seen this many stressed out white dudes since the Ashley Madison hack.");
		ti.UpdateTweetsToDisplay ("unknown", "Hey dude, big favor... I'm at the park, but PLEASE log into my Twitter and delete all my 3-1 memes from June.");
		ti.UpdateTweetsToDisplay("SBNation", "THE 3-1 TORCH HAS BEEN PASSED");
		ti.UpdateTweetsToDisplay ("ByTimReynolds", "This might not have been a great idea.");
	}
}
