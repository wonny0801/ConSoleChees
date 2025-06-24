#pragma once
class Unit
{
public:
	int x;
	int y;
	const wchar_t* body;
	WORD fColor;
	WORD bColor;
	bool isAlive;

	Unit();
	~Unit();

	virtual void Init(int x, int y, const wchar_t* unit,int colorNumber);
	virtual void Update();
	virtual void Draw();
	virtual void Move();
	virtual void Attack();


	virtual void Enable(int x, int y);
	virtual void Disable();
};
