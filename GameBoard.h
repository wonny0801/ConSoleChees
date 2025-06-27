#pragma once

static std::map<int, int> boardmap;
class GameBoard
{
public:
	GameBoard();
	~GameBoard();

	
	inline void DrawChessBoard(int size);
	void PaintPixel(int x, int y,WORD fColor,WORD bColor);
	void PaintBoard();
	void WriteCoordinate();
	void Draw();

	
};
