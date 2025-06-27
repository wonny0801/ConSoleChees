#pragma once
//#include "define.h"
//#include "Pawn.h"
class TeamBlack
{
public:
	TeamBlack();
	~TeamBlack();

	bool YourTurn;

	Pawn blackPawn[PAWN_MAX];
	King blackKing;
	Queen blackQueen;
	Knight blackKnight[UNIT_MAX];
	Rook blackRook[UNIT_MAX];
	Bishop blackBishop[UNIT_MAX];

	void Init();
	void Update();
	void Draw();
	void Move();
	void Attack();

	void Select(int x, int y);


	//void Enable(int x, int y);
	//void Disable();
};
