class Actor()
{
	private:
		Move();
		Render();
		UpdateScript();
	public:
		ApplyForce(Vector3 force);
		CheckCollision(Actor other);
};