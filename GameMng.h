#pragma once
class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	StateCtrl statectrl;

	void init();
	void Update();
	void Draw();
	
};
