#pragma once
class Rook : public Unit
{
public:
	Rook();
	~Rook();

	void Move();
	void Select(int x, int y);
};
