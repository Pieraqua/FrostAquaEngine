#pragma once
#include "Entity.h"

class EntityState
{
public:
	virtual void update(Entity& entity) {}
	virtual ~EntityState() {}
	int currJob() { return currJob_; }
protected:
	int currJob_ = 0;
};

class IdleState : public EntityState
{
public:
	IdleState() {}
	virtual void update(Entity& entity)
	{
		if (currJob_ >= 100)
		{
			currJob_ = 0;
		}
		currJob_++;
	}
		
};

class AttackingState : public EntityState
{
public:
	virtual void update(Entity& entity)
	{
		if (currJob_ >= 100)
		{
			entity.attack(entity.currTarget());
			currJob_ = 0;
		}
		currJob_ += entity.atkSpd();
	}

};

class MovingState : public EntityState
{
public:
	virtual void update(Entity& entity)
	{
		if (currJob_ >= 100)
		{
			entity.move();
			currJob_ = 0;
		}
		currJob_ += entity.movSpd();
	}

};

class DyingState : public EntityState
{
public:
	virtual void update(Entity& entity)
	{
		if (currJob_ >= 100)
		{
			entity.kill();
		}
		currJob_ += 10;
	}

};