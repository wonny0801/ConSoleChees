#pragma once
class StateCtrl
{
public:
	StateCtrl();
	~StateCtrl();

	cState* m_pCurState;
	cState* m_pPrevState;

	bool StateChange(cState* state);

	void Update();
	void Draw();
};
