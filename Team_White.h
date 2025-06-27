#pragma once
//#include "define.h"
//#include "Pawn.h"
class TeamWhite
{
public:
	TeamWhite();
	~TeamWhite();

	bool YourTurn;

	Pawn whitePawn[PAWN_MAX];
	King whiteKing;
	Queen whiteQueen;
	Knight whiteKnight[UNIT_MAX];
	Rook whiteRook[UNIT_MAX];
	Bishop whiteBishop[UNIT_MAX];

	
	void Init();
	void Update();
	void Draw();
	void Move();
	void Attack();

	void Select(int x,int y);


	//void Enable(int x, int y);
	//void Disable();
};

