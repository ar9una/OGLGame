#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Renderer.h"

class WindowManager {
public:
	
	WindowManager(unsigned int width, unsigned int height, const char* title);
	~WindowManager();

	
	void init();

	void initTimer();

	
	void update(float delta);

	
	bool closeNotRequested();

	
	double getDeltaTime();

private:

	
	void postRender();

	
	void calculateDeltaTime();

private:
	double prevTime, delta;
	unsigned int width, height;
	const char *title;

	GLFWwindow* windowPtr;

	Renderer* renderer;
};


