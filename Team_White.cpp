#include "include.h"

TeamWhite::TeamWhite()
{
}

TeamWhite::~TeamWhite()
{
}

void TeamWhite::Init()
{
	whiteKing.Init(BOARD_D8, WHITE_KING, COLORNUMBER_WHITE); 
	whiteQueen.Init(BOARD_E8, WHITE_QUEEN, COLORNUMBER_WHITE); 

	whitePawn[0].Init(BOARD_A7, WHITE_PAWN, COLORNUMBER_WHITE);
	whitePawn[1].Init(BOARD_B7, WHITE_PAWN, COLORNUMBER_WHITE);
	whitePawn[2].Init(BOARD_C7, WHITE_PAWN, COLORNUMBER_WHITE);
	whitePawn[3].Init(BOARD_D7, WHITE_PAWN, COLORNUMBER_WHITE);
	whitePawn[4].Init(BOARD_E7, WHITE_PAWN, COLORNUMBER_WHITE);
	whitePawn[5].Init(BOARD_F7, WHITE_PAWN, COLORNUMBER_WHITE);
	whitePawn[6].Init(BOARD_G7, WHITE_PAWN, COLORNUMBER_WHITE);
	whitePawn[7].Init(BOARD_H7, WHITE_PAWN, COLORNUMBER_WHITE);
	
	whiteKnight[0].Init(BOARD_B8, WHITE_KNIGHT, COLORNUMBER_WHITE);
	whiteKnight[1].Init(BOARD_G8, WHITE_KNIGHT, COLORNUMBER_WHITE);

	whiteRook[0].Init(BOARD_A8, WHITE_ROOK, COLORNUMBER_WHITE);
	whiteRook[1].Init(BOARD_H8, WHITE_ROOK, COLORNUMBER_WHITE);

	whiteBishop[0].Init(BOARD_C8, WHITE_BISHOP, COLORNUMBER_WHITE);
	whiteBishop[1].Init(BOARD_F8, WHITE_BISHOP, COLORNUMBER_WHITE);
}

void TeamWhite::Update()
{
}

void TeamWhite::Draw()
{
	for (int i = 0; i < PAWN_MAX; i++)
	{
		whitePawn[i].Draw();
	}
	whiteKing.Draw();
	whiteQueen.Draw();
	for (int i = 0; i < UNIT_MAX; i++)
	{
		whiteKnight[i].Draw();
	}
	for (int i = 0; i < UNIT_MAX; i++)
	{
		whiteRook[i].Draw();
	}
	for (int i = 0; i < UNIT_MAX; i++)
	{
		whiteBishop[i].Draw();
	}
}

void TeamWhite::Move()
{
}

void TeamWhite::Attack()
{
}
