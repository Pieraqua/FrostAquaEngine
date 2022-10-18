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
	bool setTile(int x, int y, Tile* tile);
	Tile* getTile(int x, int y);

private:
	int x_ = 0;
	int y_ = 0;

	/* Flyweight */
	/* Caso sejam implementados tiles dinamicos, podemos fazer uma lista deles. */
	Tile** grid = nullptr;
	Tile plainsTile_ = Tile(Tile::Type::PLAINS);
	Tile wallTile_ = Tile(Tile::Type::WALL);
	Tile moundTile_ = Tile(Tile::Type::MOUND);
	Tile rampTile_ = Tile(Tile::Type::RAMP);

};

