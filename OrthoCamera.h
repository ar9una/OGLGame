#pragma once
#include "Header.h"
class OrthoCamera
{
public:
	OrthoCamera();
	~OrthoCamera();

	void setNearAndFarPlane(float nearPlane, float farPlane);

	void setPosition(float x, float y);
	float getX() { return position.x; }
	float getY() { return position.y; }

	glm::mat4 view, projection, combinedMatrix;

	
private:
	float nearPlane, farPlane;
	void updateMatrices();

	glm::vec3 position, lookAt, up;

	
};

