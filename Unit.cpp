#include "include.h"

Unit::Unit()
{
	x = 0;
	y = 0;
	body = L" ";
	fColor = WHITE;
	bColor = BLACK;
	isAlive = false;
	TeamColor = 0;
	Position = 0;
	
}

Unit::~Unit()
{
}

void Unit::Init(int x, int y, const wchar_t* unit,
	int colorNumber,int PositionNumber)
{
	if (colorNumber == COLORNUMBER_WHITE)
	{
		fColor = GREEN;
		TeamColor = COLORNUMBER_WHITE;
	}
		
	if (colorNumber == COLORNUMBER_BLACK)
	{
		fColor = INTENSITY_BLUE;
		TeamColor = COLORNUMBER_BLACK;
	}
		
	body = unit;
	Enable(x, y);

	Position = PositionNumber;
	boardmap.emplace(PositionNumber, colorNumber);
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

void Unit::Select(int x, int y)
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
