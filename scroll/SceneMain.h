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
	//�w�i
	std::shared_ptr<Map> m_pMap;
	std::shared_ptr<Player> m_pPlayer;
	
	//��ʃX�N���[��
	Vec2 m_offset;
};