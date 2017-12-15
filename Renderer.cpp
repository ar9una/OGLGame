#include "Renderer.h"



Renderer::Renderer(float red /*= 0.2941f*/, float green /*= 0.03921f*/, float blue /*= 0.1294f*/, float alpha /*= 1.0f*/)
	: red(red)
	, green(green)
	, blue(blue)
	, alpha(alpha)
{

}

Renderer::~Renderer() {}

void Renderer::render(float delta) {
	preRender();

}

void Renderer::preRender() {
	glClearColor(red, green, blue, alpha);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}