class GameState
{
	protected:
		//List<Command> CommandList;
		//List<Actor> ActorList;
		enum State
		{
			game, menu, option
		};
	public:
		void UpdateGameState();
		void UpdateMenuState();
		void UpdateOptionState();
		void ProcessCommand();
};