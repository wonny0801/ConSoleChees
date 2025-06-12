#include "include.h"

StateCtrl::StateCtrl()
{
	m_pCurState = nullptr;
	m_pPrevState = nullptr;
}

StateCtrl::~StateCtrl()
{
}

bool StateCtrl::StateChange(cState* state)
{
	if (state != NULL)
	{
		m_pCurState = state;
		return true;
	}
	else
		return false;
}

void StateCtrl::Update()
{
	if (m_pPrevState != nullptr)
	{
		if (m_pCurState != nullptr)
		{
			m_pCurState->Exit();
			delete m_pCurState;
		}
		m_pCurState = m_pPrevState;
		m_pCurState->Start();
		m_pPrevState = nullptr;
	}
	if (m_pCurState != NULL)
	{
		m_pCurState->Update();
	}
}

void StateCtrl::Draw()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Draw();
	}
}
