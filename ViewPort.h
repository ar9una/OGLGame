#pragma once
#include "Header.h"
class ViewPort
{
public:
	ViewPort(float top,float bottom, float right,float left);
	~ViewPort();

	void updateMatrices();


private:
	float top, bottom, right, left;
	OrthoCamera* o_orthoCamera;
	
};

