#pragma once
#include"Vec2.h"
class Map
{
public:
	Map();
	~Map();

	void Init();
	void Update();
	void Draw(Vec2 offset);

	//L‚³‚ğæ“¾
	int getWidth()const;
	int getHeight()const;
private:

};

