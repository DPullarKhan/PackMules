class ScriptComponent
{
	private:
		enum ActorType
		{
			player, obstacle, hole
		};
	public:
		void MoveParts();
		void ComputePlayerInput();
};