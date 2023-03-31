#include "SceneMain.h"
#include"Map.h"
#include"Player.h"
#include"game.h"

SceneMain::SceneMain() :
	m_pMap(std::make_shared<Map>()),
	m_pPlayer(std::make_shared<Player>())
{
}

SceneMain::~SceneMain()
{
}

void SceneMain::Init()
{
	m_pMap->Init();
	m_pPlayer->Init();
}

void SceneMain::Update()
{
	m_pMap->Update();
	m_pPlayer->Update();

	Vec2 targetOffset{};

	targetOffset.x = (Game::kScreenWindth / 2) - m_pPlayer->getPos().x;
	if (targetOffset.x > 0)
	{
		targetOffset.x = 0;
	}
	if (targetOffset.x < -m_pMap->getWidth() + Game::kScreenWindth)
	{
		targetOffset.x = -m_pMap->getWidth() + Game::kScreenWindth;
	}

	targetOffset.y = (Game::kScreenHeight / 2) - m_pPlayer->getPos().y;
	if (targetOffset.y > 0)
	{
		targetOffset.y = 0;
	}
	if (targetOffset.y < -m_pMap->getHeight() + Game::kScreenHeight)
	{
		targetOffset.y = -m_pMap->getHeight() + Game::kScreenHeight;
	}
	m_offset = targetOffset * 0.2f + m_offset * 0.8f;
}

void SceneMain::Draw()
{
	m_pMap->Draw(m_offset);
	m_pPlayer->Draw(m_offset);
}