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
	//背景
	std::shared_ptr<Map> m_pMap;
	std::shared_ptr<Player> m_pPlayer;
	
	//画面スクロール
	Vec2 m_offset;
};