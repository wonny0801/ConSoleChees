#pragma once
class Unit
{
public:
	int x;
	int y;
	wchar_t body;
	WORD fColor;
	WORD bColor;
	bool isAlive;

	Unit();
	~Unit();

	void Update();
	void Draw();
	void Move();
	void Enable();
	void Disable();
};
