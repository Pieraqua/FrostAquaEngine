/**
* @file Map.h
* Representacao dos mapas dentro da logica do jogo.
*/
#pragma once

#include "Tile.h"

class Map{
public:
	Map(int x, int y);
	~Map();

private:
	int x = 0;
	int y = 0;
	Tile** grid = nullptr;
};

