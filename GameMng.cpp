#include "include.h"

GameMng::GameMng()
{
	statectrl.StateChange(new MenuState);
}

GameMng::~GameMng()
{
}

void GameMng::init()
{
}

void GameMng::Update()
{
	statectrl.m_pCurState->Update();
}

void GameMng::Draw()
{
	statectrl.m_pCurState->Draw();
}
