#pragma once
class Pawn : public Unit
{
public:
	Pawn();
	~Pawn();

	// void Init();
	// void Update();
	// void Draw();
	 void Move() override;

	 void Castring();
	 //void Attack();


	 //void Enable(int x, int y);
	 //void Disable();
};
