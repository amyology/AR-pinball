using UnityEngine;
using System.Collections;

public class TestGameController : MonoBehaviour {

	int gameScore = 0;
	public int gameLives = 3;

	public Rigidbody2D rb;
	public GameObject ball;
	public GameObject ballSpawn;

	public GameObject scoreText;
	public GameObject livesText;

	void Start(){
//		GameObject ballClone = Instantiate (ball) as GameObject;
//		ballClone.transform.position = ballSpawn.transform.position;
	}

	public void AddScore(int plusScore){
		gameScore += plusScore;
		scoreText.GetComponent<TextMesh>().text = "Score: " + gameScore;
	}

	public void SubLives(){
		gameLives -= 1;
		livesText.GetComponent<TextMesh>().text = "Lives: " + gameLives;
	}

	public void RespawnBall(){
		GameObject ballClone = Instantiate (ball) as GameObject;
		ballClone.transform.position = ballSpawn.transform.position;
	}
		
}
