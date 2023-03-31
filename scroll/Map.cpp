#include "Map.h"
#include"game.h"
#include"DxLib.h"

namespace
{
	//マップチップのサイズ
	constexpr int kChipSize = 100;
	//マップチップの数
	constexpr int kChipNumX = (Game::kScreenWindth * 3) / kChipSize;
	constexpr int kChipNumY = (Game::kScreenHeight * 3) / kChipSize;
}

Map::Map()
{
}

Map::~Map()
{
}

void Map::Init()
{
}

void Map::Update()
{
}

void Map::Draw(Vec2 offset)
{
	for (int x = 0; x < kChipNumX; x++)
	{
		for (int y = 0; y < kChipNumY; y++)
		{
			int posX = x * kChipSize + offset.x;
			int posY = y * kChipSize + offset.y;
			DrawBox(posX, posY,
				posX + kChipSize, posY + kChipSize,
				0xffffff, false);
			DrawFormatString(posX, posY, 0xffffff, "(%d,%d)", x * kChipSize, y * kChipSize);
		}
	}
}

int Map::getWidth() const
{
	return kChipNumX * kChipSize;
}

int Map::getHeight() const
{
	return kChipNumY * kChipSize;
}