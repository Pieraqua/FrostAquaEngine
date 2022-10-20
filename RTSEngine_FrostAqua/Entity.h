#pragma once
#include "EntityState.h"
/** @file Entity.h
*	Tratamento de entidades.
*/

class Entity
{
public:
	Entity() {};
	virtual ~Entity() {};
	virtual void update() { state_->update(*this); }
	virtual void kill() { dead_ = true; }
	/** Ataca um alvo @p target. */
	virtual void attack(Entity* target) {}
	/** Ordena que a entidade se mova a (x_dest, y_dest) */
	virtual void moveCmd(int x_dest, int y_dest) 
	{
		x_dest_ = x_dest; y_dest_ = y_dest; changeState(&movingState_);
	}
	/** Move ate na diagonal por um quadrado */
	virtual void move();
	virtual int atkSpd() { return atkSpd_; }
	virtual int movSpd() { return movSpd_; }
	virtual Entity* currTarget() { return target_; }
	virtual int currJob() { return currJob_; }

private:
	/** Troca de estado */
	virtual void changeState(EntityState* state)
	{
		state_ = state; currJob_ = 0;
	}
	/* Coisas de posicionamento */
	int x_ = 0;
	int y_ = 0;
	int x_dest_ = 0;
	int y_dest_ = 0;

	/* Atributos */
	int atkSpd_ = 0;
	int damage_ = 0;
	int movSpd_ = 1;
	int currJob_ = 0;

	/* Estado */
	static IdleState idleState_;
	static AttackingState attackingState_;
	static MovingState movingState_;
	static DyingState dyingState_;
	EntityState* state_ = &idleState_;
	bool dead_ = false;
	Entity* target_ = nullptr;
};