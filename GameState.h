#pragma once
class GameState : public cState
{
public:
	GameState();
	~GameState();

	GameBoard gameboard;

	TeamWhite whiteTeam;
	TeamBlack blackTeam;

	void Start();
	void Update();
	void Draw();
	void Exit();
};
