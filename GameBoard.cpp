#include "include.h"



GameBoard::GameBoard()
{
	
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

void GameBoard::PaintPixel(int x, int y)
{
	for (int pY = 0; pY < 2; pY++)
	{
		for (int pX = 0; pX < 6; pX++)
		{
			DrawChar(x + pX, y + pY, ' ', INTENSITY_WHITE, INTENSITY_WHITE);
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
	PaintPixel(BOARD_A1);
	PaintPixel(BOARD_A3);
	PaintPixel(BOARD_A5);
	PaintPixel(BOARD_A7);

	PaintPixel(BOARD_B2);
	PaintPixel(BOARD_B4);
	PaintPixel(BOARD_B6);
	PaintPixel(BOARD_B8);

	PaintPixel(BOARD_C1);
	PaintPixel(BOARD_C3);
	PaintPixel(BOARD_C5);
	PaintPixel(BOARD_C7);

	PaintPixel(BOARD_D2);
	PaintPixel(BOARD_D4);
	PaintPixel(BOARD_D6);
	PaintPixel(BOARD_D8);

	PaintPixel(BOARD_E1);
	PaintPixel(BOARD_E3);
	PaintPixel(BOARD_E5);
	PaintPixel(BOARD_E7);

	PaintPixel(BOARD_F2);
	PaintPixel(BOARD_F4);
	PaintPixel(BOARD_F6);
	PaintPixel(BOARD_F8);

	PaintPixel(BOARD_G1);
	PaintPixel(BOARD_G3);
	PaintPixel(BOARD_G5);
	PaintPixel(BOARD_G7);

	PaintPixel(BOARD_H2);
	PaintPixel(BOARD_H4);
	PaintPixel(BOARD_H6);
	PaintPixel(BOARD_H8);
}
