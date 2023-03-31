#include "Player.h"
#include"Pad.h"
#include"DxLib.h"
Player::Player() :
	m_pos(160,160)
{
}

Player::~Player()
{

}

void Player::Init()
{
}

void Player::Update()
{
	Pad::update();
	if (Pad::isPress(PAD_INPUT_UP))
	{
		m_pos.y -= 16.0f;
	}
	if (Pad::isPress(PAD_INPUT_DOWN))
	{
		m_pos.y += 16.0f;
	}
	if (Pad::isPress(PAD_INPUT_LEFT))
	{
		m_pos.x -= 16.0f;
	}
	if (Pad::isPress(PAD_INPUT_RIGHT))
	{
		m_pos.x += 16.0f;
	}

}

void Player::Draw(Vec2 offset)
{
	Vec2 pos = m_pos + offset;
	DrawCircleAA(pos.x, pos.y,32.0,8, 0x00a000,true);
}
