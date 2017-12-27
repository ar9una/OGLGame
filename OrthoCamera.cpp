#include "OrthoCamera.h"



OrthoCamera::OrthoCamera()
{
	initDefaultValues();
	updateMatrices();
}


OrthoCamera::~OrthoCamera()
{
}

void OrthoCamera::initDefaultValues() {

	nearPlane = 0.01f;
	farPlane = 1000.0f;

	left = -1;
	right = 1;
	top = 1;
	bottom = -1;

	position.x = 0;
	position.y = 0;
	position.z = 10;

	lookAt.x = lookAt.y = 0;
	lookAt.z = 0.0f;

	up.x = up.z = 0;
	up.y = 1;

}
void OrthoCamera::setPosition(float x, float y) {
	position.x = x;
	position.y = y;
}

void OrthoCamera::updateMatrices() {
	view = glm::translate(glm::mat4(1), -position);
	projection = glm::ortho(o_viewPort.getTop(), o_viewPort.getBottom(), o_viewPort.getRight(), o_viewPort.getLeft(), nearPlane, farPlane);
	//projection = glm::ortho(o_viewPort, nearPlane, farPlane);

	combinedMatrix = projection * view;
}


void OrthoCamera::setNearAndFarPlane(float nearPlane, float farPlane) {
	this->nearPlane = nearPlane;
	this->farPlane = farPlane;
}

void OrthoCamera::setLookAt(glm::vec3 lookAt)
{
	this->lookAt = lookAt;
}
void  OrthoCamera::setPosition(glm::vec3 position)
{
	this->position = position;
}
void  OrthoCamera::setCamerUp(glm::vec3 up)
{
	this->up = up;
}



