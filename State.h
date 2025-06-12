#pragma once
class cState
{
public:
	cState();
	~cState();

	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Exit() = 0;
};