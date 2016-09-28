using UnityEngine;
using System.Collections;

public class SpawnBall : MonoBehaviour {

	public GameController gameController;
	public GameObject ball;
	//Vector3 defaultPosition;

	void Start () {
		//defaultPosition = ball.transform.position;
	}

//	void OnMouseDown () {		
//		GameObject ballClone = Instantiate (ball) as GameObject;
//		ballClone.transform.position = defaultPosition;
//		Debug.Log ("click");
//	}

//	void FixedUpdate(){
//		if (gameController.ballDown == true) {
//			GameObject ball = Instantiate (ball) as GameObject;
//			ball.transform.position = transform.position;
//			gameController.ballDown = false;
//		}
//	}

}
