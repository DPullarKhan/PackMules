#include <list>
#include <Assets.h>
#include <GameState.h>
class Game
{
	public:
		bool gameIsEnded = true; //for debugging
		std::list <Assets> AssetList;
		GameState gameState;
		void UpdateEngineState()
		{};
		void EndGame()
		{};
		void ProcessInput()
		{};
		void Draw()
		{};
		void LoadAssets()
		{};
		void StartGame()
		{};
};