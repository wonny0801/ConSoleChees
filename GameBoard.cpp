#include "include.h"



GameBoard::GameBoard()
{
	boardmap.emplace(C_BOARD_A1, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_B1, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_C1, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_D1, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_E1, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_F1, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_G1, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_H1, COLORNUMBER_WHITE);
								
	boardmap.emplace(C_BOARD_A2, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_B2, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_C2, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_D2, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_E2, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_F2, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_G2, COLORNUMBER_WHITE);
	boardmap.emplace(C_BOARD_H2, COLORNUMBER_WHITE);

	boardmap.emplace(C_BOARD_A7, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_B7, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_C7, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_D7, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_E7, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_F7, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_G7, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_H7, COLORNUMBER_BLACK);
								 
	boardmap.emplace(C_BOARD_A8, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_B8, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_C8, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_D8, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_E8, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_F8, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_G8, COLORNUMBER_BLACK);
	boardmap.emplace(C_BOARD_H8, COLORNUMBER_BLACK);
}

GameBoard::~GameBoard()
{

}

inline void GameBoard::DrawChessBoard(int size = 25)
{
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			DrawBoard(10, 2 + i,
				L"忙式式式式式式成式式式式式式成式式式式式式成式式式式式式成式式式式式式成式式式式式式成式式式式式式成式式式式式式忖",
				WHITE, BLACK);
			continue;
		}
		if (i % 3 == 0 && i != 0)
		{
			DrawBoard(10, 2 + i,
				L"戍式式式式式式托式式式式式式托式式式式式式托式式式式式式托式式式式式式托式式式式式式托式式式式式式托式式式式式式扣",
				WHITE, BLACK);
			continue;
		}
		else if (i % 3 != 0)
		{
			DrawBoard(10, 2 + i,
				L"弛      弛      弛      弛      弛      弛      弛      弛      弛",
				WHITE, BLACK);
			continue;
		}
		if (i == 24)
		{
			DrawBoard(10, 2 + i,
				L"戌式式式式式式扛式式式式式式扛式式式式式式扛式式式式式式扛式式式式式式扛式式式式式式扛式式式式式式扛式式式式式式戎",
				WHITE, BLACK);
			continue;
		}
	}
	
}

void GameBoard::PaintPixel(int x, int y, WORD fColor, WORD bColor)
{
	for (int pY = 0; pY < 2; pY++)
	{
		for (int pX = 0; pX < 6; pX++)
		{
			DrawChar(x + pX, y + pY, ' ', fColor, bColor);
		}
	}
	
	//DrawChar(11, 3,);
}



void GameBoard::WriteCoordinate()
{
	for (int i = 1; i <= 8; i++)
	{
		DrawChar(9, 3 * i, 48 + i, WHITE, BLACK);
		continue;

	}
	for (int i = 1; i <= 8; i++)
	{
		DrawChar(7 * i + 6, 27, 64 + i, WHITE, BLACK);
	}
}

void GameBoard::Draw()
{
	DrawChessBoard();
	PaintBoard();
	WriteCoordinate();
	
}

void GameBoard::PaintBoard()
{
	PaintPixel(BOARD_A1,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_A3,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_A5,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_A7,INTENSITY_WHITE,INTENSITY_WHITE);
					   
	PaintPixel(BOARD_B2,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_B4,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_B6,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_B8,INTENSITY_WHITE,INTENSITY_WHITE);
					  
	PaintPixel(BOARD_C1,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_C3,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_C5,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_C7,INTENSITY_WHITE,INTENSITY_WHITE);
					   
	PaintPixel(BOARD_D2,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_D4,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_D6,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_D8,INTENSITY_WHITE,INTENSITY_WHITE);
					   
	PaintPixel(BOARD_E1,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_E3,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_E5,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_E7,INTENSITY_WHITE,INTENSITY_WHITE);
					   
	PaintPixel(BOARD_F2,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_F4,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_F6,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_F8,INTENSITY_WHITE,INTENSITY_WHITE);
					   
	PaintPixel(BOARD_G1,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_G3,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_G5,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_G7,INTENSITY_WHITE,INTENSITY_WHITE);
					  
	PaintPixel(BOARD_H2,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_H4,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_H6,INTENSITY_WHITE,INTENSITY_WHITE);
	PaintPixel(BOARD_H8,INTENSITY_WHITE,INTENSITY_WHITE);

	
}
