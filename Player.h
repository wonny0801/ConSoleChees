#pragma once
class Player : public Unit
{
public:
	Player();
	~Player();

	std::string PlayerBody;

	
	void Update();
	void Draw();
	void Move();

	void Clipping();
	void Select();
};
