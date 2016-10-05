using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class BoundaryScript : MonoBehaviour {
	TestGameController gameController;

	public GameObject endText;

	public GameObject gameControllerObject;

	void Start(){
		gameController = gameControllerObject.GetComponent<TestGameController> ();
	}

	void OnTriggerEnter2D(Collider2D other){

		Destroy (other.gameObject);
		gameController.SubLives ();
		if (gameController.gameLives > 0) {
			gameController.RespawnBall ();
		}
		if (gameController.gameLives == 0) {
			endText.SetActive(true);
			StartCoroutine (Reload ());
		}
	}

	IEnumerator Reload (){
		yield return new WaitForSeconds (3);
		Scene scene = SceneManager.GetActiveScene ();
		SceneManager.LoadScene (scene.name);
	}
}
