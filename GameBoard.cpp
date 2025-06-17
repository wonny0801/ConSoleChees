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
		// ����
		std::wcout << L"��";
		for (int i = 0; i < size - 1; ++i)
			std::wcout << L"��������";
		std::wcout << L"��������\n";

		// �߰��� + ĭ �ݺ�
		for (int row = 0; row < size; ++row) {
			std::wcout << L"��";
			for (int col = 0; col < size; ++col)
				std::wcout << L"   ��";
			std::wcout << "\n";

			if (row != size - 1) {
				std::wcout << L"��";
				for (int i = 0; i < size - 1; ++i)
					std::wcout << L"��������";
				std::wcout << L"��������\n";
			}
		}

		// �Ʒ���
		std::wcout << L"��";
		for (int i = 0; i < size - 1; ++i)
			std::wcout << L"��������";
		std::wcout << L"��������\n";
	
}

void GameBoard::Draw()
{
	DrawChessBoard();
}
