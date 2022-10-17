#include "Tile.h"

Tile::Type Tile::getType()
{
	return this->type;
}

Tile::Tile(Tile::Type type)
{
	this->type = type;
}

Tile::Tile()
{
	this->type = Type::PLAINS;
}
