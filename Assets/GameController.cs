using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameController : MonoBehaviour {

	public GameObject ball;
	int points;
	public GUIText scoreText;
	int lives;
	public GUIText livesText;
	public bool ballDown = false;

	void Start () {
		points = 0;
		lives = 3;
	}

	void Update () {

	}

	public void AddPoints () {
		points += 10;
		scoreText.text = "Score: " + points;
	}

	public void MinusLife () {
		lives --;
		livesText.text = "Lives: " + lives;
	}

	public void destroyBall (){
		Destroy(ball);
		MinusLife ();
		ballDown = true;
	}
		
}
