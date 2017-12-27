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

	const glm::mat4& getCombinedMatrix()const { return combinedMatrix; }

	void setLookAt(glm::vec3);
	void setPosition(glm::vec3 position);
	void setCamerUp(glm::vec3 up);

	
private:
	void initDefaultValues();
	void updateMatrices();

private:
	float left, right, top, bottom;
	float nearPlane, farPlane;
	glm::vec3 position, lookAt, up;
	glm::mat4 view, projection, combinedMatrix;

	
};

