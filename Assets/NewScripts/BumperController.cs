using UnityEngine;
using System.Collections;

public class BumperController : MonoBehaviour {
	TestGameController gameController;

	public GameObject gameControllerObject;
	public int pointAmount;

	// Use this for initialization
	void Start () {
		gameController = gameControllerObject.GetComponent<TestGameController> ();
	}

	void OnCollisionEnter2D(Collision2D other){
		gameController.AddScore (pointAmount);
	}
}
