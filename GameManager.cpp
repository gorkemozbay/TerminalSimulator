#include "GameManager.h"

void GameManager::drawMap() {	
	
	for (int posY = 0; posY < Settings::ROWS; ++posY) {
		for (int posX = 0; posX < Settings::COLS; ++posX) {
			// check for worker
			bool foundEntity = false;
			for (Worker worker : workerList) {
				int workerX = get<0>(worker.getPos());
				int workerY = get<1>(worker.getPos());
				if (workerX == posX and workerY == posY) {
					foundEntity = true;
					cout << worker.getSymbol() << "\t";
				}
			}
			if (not foundEntity) {
				cout << ".\t";
			}
		}
		cout << endl;
		cout << endl;
	}	
}

void GameManager::addWorker(Worker newWorker) {
	workerList.push_back(newWorker);
}