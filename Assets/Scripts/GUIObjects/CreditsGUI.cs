using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CreditsGUI : MonoBehaviour
{
    public UnityEngine.UI.Text credits;

    //
    // Start()
    //
    void Start()
    {
        credits.text = "Developed by\n";
        credits.text += "Carlos Marchani\n\n";
        credits.text += "Based on The Break-Up Game in\n";
        credits.text += "Unity 4.x Game Development by Example";
    }


    //
    // ReturnToMenuOnClick()
    //
    void ReturnToMenuOnClick()
    {
        SceneManager.LoadScene("title");
    }
}
