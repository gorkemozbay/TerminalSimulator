#pragma once

#include "EntityBase.h"

typedef enum {
	UP = 0,
	DOWN = 1,
	RIGHT = 2,
	LEFT = 3
}MOVE_DIRECTION;

class Worker : public EntityBase {
public:
	using EntityBase::EntityBase;
	void move(int direction);
};

