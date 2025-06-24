#include "include.h"

TeamBlack::TeamBlack()
{
}

TeamBlack::~TeamBlack()
{
}

void TeamBlack::Init()
{
	blackKing.Init(BOARD_D1, BLACK_KING, COLORNUMBER_BLACK); 
	blackQueen.Init(BOARD_E1, BLACK_QUEEN, COLORNUMBER_BLACK);

	blackPawn[0].Init(BOARD_A2, BLACK_PAWN, COLORNUMBER_BLACK);
	blackPawn[1].Init(BOARD_B2, BLACK_PAWN, COLORNUMBER_BLACK);
	blackPawn[2].Init(BOARD_C2, BLACK_PAWN, COLORNUMBER_BLACK);
	blackPawn[3].Init(BOARD_D2, BLACK_PAWN, COLORNUMBER_BLACK);
	blackPawn[4].Init(BOARD_E2, BLACK_PAWN, COLORNUMBER_BLACK);
	blackPawn[5].Init(BOARD_F2, BLACK_PAWN, COLORNUMBER_BLACK);
	blackPawn[6].Init(BOARD_G2, BLACK_PAWN, COLORNUMBER_BLACK);
	blackPawn[7].Init(BOARD_H2, BLACK_PAWN, COLORNUMBER_BLACK);

	blackKnight[0].Init(BOARD_B1, BLACK_KNIGHT, COLORNUMBER_BLACK);
	blackKnight[1].Init(BOARD_G1, BLACK_KNIGHT, COLORNUMBER_BLACK);

	blackRook[0].Init(BOARD_A1, BLACK_ROOK, COLORNUMBER_BLACK);
	blackRook[1].Init(BOARD_H1, BLACK_ROOK, COLORNUMBER_BLACK);

	blackBishop[0].Init(BOARD_C1, BLACK_BISHOP, COLORNUMBER_BLACK);
	blackBishop[1].Init(BOARD_F1, BLACK_BISHOP, COLORNUMBER_BLACK);

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