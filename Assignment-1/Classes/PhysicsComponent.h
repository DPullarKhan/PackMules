class PhysicsComponent()
{
	protected:
		float mass;
		Vector3 Position;
		Vector3 Rotation;
		Vector3 Scale;
		bool anchored;
		float velocity;
		float acceleration;
	public:
		Rotate();
		ApplyForce();
		GetVelocity();
};