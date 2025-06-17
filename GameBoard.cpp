#include "include.h"



GameBoard::GameBoard()
{
	
}

GameBoard::~GameBoard()
{
}

inline void GameBoard::DrawChessBoard(int size = 8)
{
		std::wcout.imbue(std::locale(""));
		// 嶺還
		std::wcout << L"忙";
		for (int i = 0; i < size - 1; ++i)
			std::wcout << L"式式式成";
		std::wcout << L"式式式忖\n";

		// 醞除還 + 蘊 奩犒
		for (int row = 0; row < size; ++row) {
			std::wcout << L"弛";
			for (int col = 0; col < size; ++col)
				std::wcout << L"   弛";
			std::wcout << "\n";

			if (row != size - 1) {
				std::wcout << L"戍";
				for (int i = 0; i < size - 1; ++i)
					std::wcout << L"式式式托";
				std::wcout << L"式式式扣\n";
			}
		}

		// 嬴概還
		std::wcout << L"戌";
		for (int i = 0; i < size - 1; ++i)
			std::wcout << L"式式式扛";
		std::wcout << L"式式式戎\n";
	
}

void GameBoard::Draw()
{
	DrawChessBoard();
}
