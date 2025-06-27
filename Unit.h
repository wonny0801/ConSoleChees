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

	bool TeamColor;

	int Position;

	Unit();
	~Unit();

	virtual void Init(int x, int y, const wchar_t* unit,
		int colorNumber,int PositionNumber);
	virtual void Update();
	virtual void Draw();
	virtual void Move();

	virtual void Select(int x, int y);
	virtual void Attack();


	virtual void Enable(int x, int y);
	virtual void Disable();
};
