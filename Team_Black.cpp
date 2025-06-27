#include "include.h"

TeamBlack::TeamBlack()
{
	YourTurn = false;
}

TeamBlack::~TeamBlack()
{
}

void TeamBlack::Init()
{
	blackKing.Init(BOARD_D1, BLACK_KING, COLORNUMBER_BLACK, C_BOARD_D1);
	blackQueen.Init(BOARD_E1, BLACK_QUEEN, COLORNUMBER_BLACK, C_BOARD_E1);

	blackPawn[0].Init(BOARD_A2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_A2);
	blackPawn[1].Init(BOARD_B2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_B2);
	blackPawn[2].Init(BOARD_C2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_C2);
	blackPawn[3].Init(BOARD_D2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_D2);
	blackPawn[4].Init(BOARD_E2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_E2);
	blackPawn[5].Init(BOARD_F2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_F2);
	blackPawn[6].Init(BOARD_G2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_G2);
	blackPawn[7].Init(BOARD_H2, BLACK_PAWN, COLORNUMBER_BLACK,C_BOARD_H2);

	blackKnight[0].Init(BOARD_B1, BLACK_KNIGHT, COLORNUMBER_BLACK, C_BOARD_B1);
	blackKnight[1].Init(BOARD_G1, BLACK_KNIGHT, COLORNUMBER_BLACK, C_BOARD_G1);

	blackRook[0].Init(BOARD_A1, BLACK_ROOK, COLORNUMBER_BLACK, C_BOARD_A1);
	blackRook[1].Init(BOARD_H1, BLACK_ROOK, COLORNUMBER_BLACK, C_BOARD_H1);

	blackBishop[0].Init(BOARD_C1, BLACK_BISHOP, COLORNUMBER_BLACK, C_BOARD_C1);
	blackBishop[1].Init(BOARD_F1, BLACK_BISHOP, COLORNUMBER_BLACK, C_BOARD_F1);

}

void TeamBlack::Update()
{
}

void TeamBlack::Draw()
{
	for (int i = 0; i < PAWN_MAX; i++)
	{
		blackPawn[i].Draw();
	}
	blackKing.Draw();
	blackQueen.Draw();
	for (int i = 0; i < UNIT_MAX; i++)
	{
		blackKnight[i].Draw();
	}
	for (int i = 0; i < UNIT_MAX; i++)
	{
		blackRook[i].Draw();
	}
	for (int i = 0; i < UNIT_MAX; i++)
	{
		blackBishop[i].Draw();
	}
}

void TeamBlack::Move()
{
}

void TeamBlack::Attack()
{
}

void TeamBlack::Select(int x, int y)
{
	if (YourTurn)
	{
		for (int i = 0; i < PAWN_MAX; i++)
		{
			blackPawn[i].Select(x, y);
		}
		blackKing.Select(x, y);
		blackQueen.Select(x, y);
		for (int i = 0; i < UNIT_MAX; i++)
		{
			blackKnight[i].Select(x, y);
		}
		for (int i = 0; i < UNIT_MAX; i++)
		{
			blackRook[i].Select(x, y);
		}
		for (int i = 0; i < UNIT_MAX; i++)
		{
			blackBishop[i].Select(x, y);
		}
	}
	
}
