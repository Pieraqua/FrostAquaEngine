#include "Entity.h"
/** Move ate na diagonal por um quadrado */
void Entity::move()
{
	if (this->x_dest_ > this->x_)
		this->x_++;
	else if (this->x_dest_ < this->x_)
		this->x_--;
	if (this->y_dest_ > this->y_)
		this->y_++;
	else if (this->y_dest_ < this->y_)
		this->y_--;
	
	if (this->x_dest_ == this->x_ && this->y_dest_ == this->y_)
	{
		changeState(&this->idleState_);
	}
}
