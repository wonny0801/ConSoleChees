#include "include.h"

GameState::GameState()
{
	blackPawn.Init(BOARD_A1,BLACK_PAWN);
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()
{
	if (GetAsyncKeyState(VK_F1))
	{
		GameMng::Getlns()->statectrl.StateChange(new MenuState);
	}
	
}

void GameState::Draw()
{
	DrawStr(110, 10, "GameState", WHITE, BLACK);
	gameboard.Draw();
	blackPawn.Draw();
}

void GameState::Exit()
{
}
