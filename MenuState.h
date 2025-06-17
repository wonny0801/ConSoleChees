#pragma once
class MenuState : public cState
{
public:
	MenuState();
	~MenuState();


	void Start();
	void Update();
	void Draw();
	void Exit();
};
