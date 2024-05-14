#pragma once

#include <vector>
#include <iostream>

#include "Settings.h"
#include "Worker.h"

using namespace std;

class GameManager {
public:
	void drawMap();
	void addWorker(Worker newWorker);

private:
	vector<Worker> workerList;
};

