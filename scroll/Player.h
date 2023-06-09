#pragma once
#include"Vec2.h"

class Player
{
public:
	Player();
	~Player();

	void Init();
	void Update();
	void Draw(Vec2 offset);

	Vec2 getPos()const { return m_pos; }

private:
	Vec2 m_pos;
};

