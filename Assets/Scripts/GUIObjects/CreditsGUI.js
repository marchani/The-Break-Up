
var credits : UnityEngine.UI.Text;

function Start ()
{
	credits.text = "Developed by\n";
	credits.text += "Carlos Marchani\n\n";
	credits.text += "Based on The Break-Up Game in\n";
	credits.text += "Unity 4.x Game Development by Example";
}

function ReturnToMenuOnClick ()
{
	Application.LoadLevel("title");
}