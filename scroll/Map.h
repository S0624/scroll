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

	//�L�����擾
	int getWidth()const;
	int getHeight()const;
private:

};

