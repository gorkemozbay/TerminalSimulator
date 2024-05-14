#include "EntityBase.h"

EntityBase::EntityBase(int ID, int posX, int posY, char symbol) {
	this->ID = ID;
	this->posX = posX;
	this->posY = posY;
	this->symbol = symbol;
};

tuple<int, int> EntityBase::getPos() {
	return make_tuple(posX, posY);
}

char EntityBase::getSymbol() {
	return symbol;
}