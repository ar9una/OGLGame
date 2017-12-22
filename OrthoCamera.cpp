#include "OrthoCamera.h"



OrthoCamera::OrthoCamera()
{
}


OrthoCamera::~OrthoCamera()
{
}

void OrthoCamera::setPosition(float x, float y) {
	position.x = x;
	position.y = y;
}

void OrthoCamera::updateMatrices() {
	view = glm::translate(glm::mat4(1), -position);
	}


void OrthoCamera::setNearAndFarPlane(float nearPlane, float farPlane) {
	this->nearPlane = nearPlane;
	this->farPlane = farPlane;
}
