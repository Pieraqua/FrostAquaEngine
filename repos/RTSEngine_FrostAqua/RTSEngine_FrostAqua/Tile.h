/**
* @file Tile.h
* Classe que define os tipos de terreno presentes nos mapas.
*/
#pragma once

class Tile{
public:
	enum class Type {
		PLAINS,
		WALL,
		RAMP,
		MOUND
	};

	Type getType();
	Tile(Tile::Type type);
	Tile();

private:
	Type type = Type::PLAINS;
};