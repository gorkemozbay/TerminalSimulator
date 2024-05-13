#include "GameManager.h"

void GameManager::drawMap() {	
	for (int i = 0; i < Settings::ROWS; ++i) {
		for (int j = 0; j < Settings::COLS; ++j) {
			cout << ".\t";
		}
		cout << endl;
		cout << endl;
	}	
}