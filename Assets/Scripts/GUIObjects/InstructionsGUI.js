﻿var instructions : UnityEngine.UI.Text;

function Start ()
{
	instructions.text = "The Break-Up puts you in the role of a guy who's\n";
	instructions.text += "been kicked out of his apartment by his girlfriend.\n\n";
	instructions.text += "Your most prized possessions are your Beer Steins of the\n";
	instructions.text += "World collection and your cartoon bomb collection, and your\n";
	instructions.text += "ex-girlfriend is throwing both of them out of the window!\n\n";
	instructions.text += "The bombs, naturally, are lit.  You have to catch the\n";
	instructions.text += "fragile beer steins and avoid the bombs.";
}

function ReturnToMenuOnClick ()
{
	Application.LoadLevel("title");
}