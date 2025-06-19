#include "include.h"

Unit::Unit()
{
	x = 0;
	y = 0;
	body = L" ";
	fColor = WHITE;
	bColor = BLACK;
	isAlive = false;
}

Unit::~Unit()
{
}

void Unit::Init(int x, int y, const wchar_t* unit)
{
	body = unit;
	Enable(x, y);
}

void Unit::Update()
{
	Move();
	Attack();
}

void Unit::Draw()
{
	if(isAlive)
		DrawBoard(x + 2, y, body, fColor, bColor);
}

void Unit::Move()
{
}

void Unit::Attack()
{
}

void Unit::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	isAlive = true;
}

void Unit::Disable()
{
	isAlive = false;
}
