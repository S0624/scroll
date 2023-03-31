#pragma once
#include<memory>
#include"Vec2.h"
class Map;
class Player;

class SceneMain
{
public:
	SceneMain();
	~SceneMain();

	void Init();
	void Update();
	void Draw();
private:
	//”wŒi
	std::shared_ptr<Map> m_pMap;
	std::shared_ptr<Player> m_pPlayer;
	
	//‰æ–ÊƒXƒNƒ[ƒ‹
	Vec2 m_offset;
};