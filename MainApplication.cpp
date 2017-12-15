#include "WindowManager.h"
#include "Consts.h"

WindowManager *windowManager;


void cleanUp() {
	delete windowManager;
}

int main() {
	windowManager = new WindowManager(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
	windowManager->init();

	windowManager->initTimer();
	do {
		float delta = static_cast<float> (windowManager->getDeltaTime());

		windowManager->update(delta);
	} while (windowManager->closeNotRequested());

	cleanUp();
}