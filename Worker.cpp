#include "Worker.h"

void Worker::move(int direction) {
	switch (direction) {
		case MOVE_DIRECTION::UP:
			if (posY - 1 <= 0) {
				posY--;
			}
			break;
		case MOVE_DIRECTION::DOWN:
			break;
		case MOVE_DIRECTION::RIGHT:
			break;
		case MOVE_DIRECTION::LEFT:
			break;
		default:
			break;
	}
}