/**
* @file mapas.c
* Representacao dos mapas na logica do jogo.
*/

#include "Map.h"

Map::Map(int x, int y)
{
	this->grid = new Tile* [x*y];
	this->x_ = x; this->y_ = y;

	/* Inicializa todos os tiles como planicie */
	for (int i = 0; i < x * y; i++)
	{
		this->grid[i] = &plainsTile_;
	}
}

Map::~Map()
{
	delete this->grid;
}

bool Map::setTile(int x, int y, Tile* tile)
{
	if (x < this->x_ && y < this->y_)
	{
		this->grid[x * this->y_ + y] = tile;
		return true;
	}
	return false;
}

Tile* Map::getTile(int x, int y)
{
	if (x < this->x_ && y < this->y_)
	{
		return this->grid[x * this->y_ + y];
	}
	return nullptr;
}
