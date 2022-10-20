#include "Tile.h"

Tile::Type Tile::getType()
{
	return this->type_;
}

Tile::Tile(Tile::Type type)
{
	this->type_ = type;

	switch (type)
	{
	case Type::PLAINS:
		this->walkable_ = true;
		this->altitude_ = 0;
		this->water_ = false;
		this->ramp_ = false;
	case Type::WALL:
		this->walkable_ = false;
		this->altitude_ = 0;
		this->water_ = false;
		this->ramp_ = false;
	case Type::RAMP:
		this->walkable_ = true;
		this->altitude_ = 0;
		this->water_ = false;
		this->ramp_ = true;
	case Type::MOUND:
		this->walkable_ = true;
		this->altitude_ = 0;
		this->water_ = false;
		this->ramp_ = false;
	default:
		this->type_ = Type::PLAINS;
		this->walkable_ = true;
		this->altitude_ = 0;
		this->water_ = false;
		this->ramp_ = false;
		break;
	}
}

Tile::Tile()
{
	this->type_ = Type::PLAINS;
	this->walkable_ = true;
	this->altitude_ = 0;
	this->water_ = false;
	this->ramp_ = false;
}

Tile::Tile(Tile::Type type, bool walkable, char altitude, bool water, bool ramp)
{
	this->type_ = type;
	this->walkable_ = walkable;
	this->altitude_ = altitude;
	this->water_ = water;
	this->ramp_ = ramp;
}
