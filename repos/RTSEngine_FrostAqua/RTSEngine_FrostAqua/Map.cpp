/**
* @file mapas.c
* Representacao dos mapas na logica do jogo.
*/

#include "Map.h"

Map::Map(int x, int y)
{
	this->grid = new Tile* [x];
	for (int i = 0; i < x; i++)
	{
		this->grid[i] = new Tile[y];
	}
	this->x = x; this->y = y;
}

Map::~Map()
{
	for (int i = 0; i < this->x; i++)
	{
		delete this->grid[i];
	}
	delete this->grid;
}