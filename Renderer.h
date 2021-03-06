#pragma once
#include <GLFW/glfw3.h>


class Renderer {
public:
	

	Renderer(float red = 0.2941f, float green = 0.03921f, float blue = 0.1294f, float alpha = 1.0f);
	~Renderer();

	
	void render(float delta);

private:
	
	void preRender();

private:
	float red, green, blue, alpha;
};

