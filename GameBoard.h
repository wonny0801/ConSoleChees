#pragma once
class GameBoard
{
public:
	GameBoard();
	~GameBoard();

	
	inline void DrawChessBoard(int size);
	void PaintPixel(int x, int y);
	void PaintBoard();
	void WriteCoordinate();
	void Draw();
};
