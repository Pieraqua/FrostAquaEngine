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
	Tile(Tile::Type type, bool walkable, char altitude, bool water, bool ramp);

private:
	/* The type of terrain, used for graphics. */
	Type type_ = Type::PLAINS;
	/* If a character can walk on this tile. */
	bool walkable_ = false;
	/* The z-axis of the tile. */
	char altitude_ = 0;
	/* If a boat can cross this tile. */
	bool water_ = false;
	/* If this connects two layers */
	bool ramp_ = false;
};