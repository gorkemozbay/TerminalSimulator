#pragma once

#include <tuple>

using namespace std;

class EntityBase {
public:
	EntityBase(int ID, int posX, int posY, char symbol);
	tuple<int, int> getPos();
	char getSymbol();
protected:		
	int ID;
	int posX;
	int posY;
	char symbol;
};

