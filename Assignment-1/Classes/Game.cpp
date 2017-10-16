int main()
{
	LoadAssets();
	StartGame();
	
	while (!gameIsEnded)
	{
		ProcessInput();
		UpdateEngineState();
		Draw();
	}
	
	EndGame();
}