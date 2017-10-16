class Actor
{
	private:
		void Move();
		void Render();
		void UpdateScript();
	public:
		void ApplyForce(int x, int y);
		void CheckCollision(Actor other);
};