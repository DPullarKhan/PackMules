class PhysicsComponent
{
	protected:
		float mass;
		float PosX, PosY;		//vector2
		float RotX, RotY;		//vector2
		float ScaleX, ScaleY;	//vector2
		bool anchored;
		float velocity;
		float acceleration;
	public:
		void Rotate();
		void ApplyForce();
		void GetVelocity();
};