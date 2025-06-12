#pragma once
class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	void init();
	void Update();
	void Draw();
	
};
