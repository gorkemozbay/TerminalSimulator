
#include "GameManager.h"
#include "Worker.h"

int main() {
	GameManager gameManager;
	Worker worker1(1, 3, 4, 'W');

	gameManager.addWorker(worker1);
	gameManager.drawMap();
}