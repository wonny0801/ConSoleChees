#include "include.h"

TeamWhite::TeamWhite()
{
	YourTurn = true;
}

TeamWhite::~TeamWhite()
{
}

void TeamWhite::Init()
{
	whiteKing.Init(BOARD_D8, WHITE_KING, COLORNUMBER_WHITE,C_BOARD_D8); 
	whiteQueen.Init(BOARD_E8, WHITE_QUEEN, COLORNUMBER_WHITE, C_BOARD_E8);

	whitePawn[0].Init(BOARD_A7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_A7);
	whitePawn[1].Init(BOARD_B7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_B7);
	whitePawn[2].Init(BOARD_C7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_C7);
	whitePawn[3].Init(BOARD_D7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_D7);
	whitePawn[4].Init(BOARD_E7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_E7);
	whitePawn[5].Init(BOARD_F7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_F7);
	whitePawn[6].Init(BOARD_G7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_G7);
	whitePawn[7].Init(BOARD_H7, WHITE_PAWN, COLORNUMBER_WHITE,C_BOARD_H7);
	
	whiteKnight[0].Init(BOARD_B8, WHITE_KNIGHT, COLORNUMBER_WHITE, C_BOARD_B8);
	whiteKnight[1].Init(BOARD_G8, WHITE_KNIGHT, COLORNUMBER_WHITE, C_BOARD_G8);

	whiteRook[0].Init(BOARD_A8, WHITE_ROOK, COLORNUMBER_WHITE,C_BOARD_A8);
	whiteRook[1].Init(BOARD_H8, WHITE_ROOK, COLORNUMBER_WHITE,C_BOARD_H8);

	whiteBishop[0].Init(BOARD_C8, WHITE_BISHOP, COLORNUMBER_WHITE,C_BOARD_C8);
	whiteBishop[1].Init(BOARD_F8, WHITE_BISHOP, COLORNUMBER_WHITE,C_BOARD_F8);
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

void TeamWhite::Select(int x, int y)
{
	if (YourTurn)
	{
		for (int i = 0; i < PAWN_MAX; i++)
		{
			whitePawn[i].Select(x, y);
		}
		whiteKing.Select(x, y);
		whiteQueen.Select(x, y);
		for (int i = 0; i < UNIT_MAX; i++)
		{
			whiteKnight[i].Select(x, y);
		}
		for (int i = 0; i < UNIT_MAX; i++)
		{
			whiteRook[i].Select(x, y);
		}
		for (int i = 0; i < UNIT_MAX; i++)
		{
			whiteBishop[i].Select(x, y);
		}
	}
	
}
