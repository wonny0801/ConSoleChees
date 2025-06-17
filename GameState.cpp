#include "include.h"

GameState::GameState()
{
	
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
	DrawStr(15, 10, "GameState", WHITE, BLACK);
	gameboard.Draw();
}

void GameState::Exit()
{
}
