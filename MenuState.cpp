#include "include.h"

MenuState::MenuState()
{
}

MenuState::~MenuState()
{
}

void MenuState::Start()
{
}

void MenuState::Update()
{
	if (GetAsyncKeyState(VK_F5))
	{
		GameMng::Getlns()->statectrl.StateChange(new GameState);
	}
}

void MenuState::Draw()
{
	DrawStr(15, 10, "menustate", WHITE, BLACK);
}

void MenuState::Exit()
{
}
