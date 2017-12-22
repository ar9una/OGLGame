#include "WindowManager.h"



#include <assert.h>

WindowManager::WindowManager(unsigned int width, unsigned int height, const char *title)
	:width(width)
	, height(height)
	, title(title)
{
}

WindowManager::~WindowManager() {
	delete renderer;
	glfwTerminate();
}

void WindowManager::init() {
	glfwInit();

	windowPtr = glfwCreateWindow(width, height, title, nullptr, nullptr);

	glfwMakeContextCurrent(windowPtr);

	//glewExperimental = true;
	glewExperimental = static_cast<GLboolean>(true);
	glewInit();

	glEnable(GL_DEPTH_TEST);

	renderer = new Renderer();
}

void WindowManager::initTimer() {
	assert(windowPtr != nullptr);
	prevTime = glfwGetTime();
	delta = 0.0;
}

void WindowManager::update(float delta) {

	renderer->render(delta);
	postRender();
}

bool WindowManager::closeNotRequested() {

	
	return glfwWindowShouldClose(windowPtr) == 0;
}

double WindowManager::getDeltaTime() {
	return delta;
}



void WindowManager::postRender() {
	glfwSwapBuffers(windowPtr);
	glfwPollEvents();
}

void WindowManager::calculateDeltaTime() {
	double currTime = glfwGetTime();
	delta = currTime - prevTime;
	prevTime = currTime;
}
