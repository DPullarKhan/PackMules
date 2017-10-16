#include <Game.h>

int main()
{
	Game game;
	game.LoadAssets();
	game.StartGame();
	
	while (!game.gameIsEnded)
	{
		game.ProcessInput();
		game.UpdateEngineState();
		game.Draw();
	}
	
	game.EndGame();
	return 0;
}