class ScriptComponent()
{
	private:
		enum ActorType
		{
			player, obstacle, hole
		};
	public:
		MoveParts();
		ComputePlayerInput();
};