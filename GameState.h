#pragma once
class GameState : public cState
{
public:
	GameState();
	~GameState();

	GameBoard gameboard;

	void Start();
	void Update();
	void Draw();
	void Exit();
};
