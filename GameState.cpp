#include "include.h"

GameState::GameState()
{
	blackTeam.Init();
	whiteTeam.Init();
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
	player.Update();
	
}

void GameState::Draw()
{
	DrawStr(110, 10, "GameState", WHITE, BLACK);
    gameboard.Draw();

	player.Draw();
	whiteTeam.Draw();
	blackTeam.Draw();
}

void GameState::Exit()
{
}
