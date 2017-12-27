#pragma once
#include "Header.h"
class ViewPort
{
public:
	ViewPort(float top,float bottom, float right,float left);
	~ViewPort();

	float getTop()	{		return top;	}
	float getBottom()	{		return bottom;	}
	float getRight()	{		return right;	}
	float getLeft()	{		return left;	}
private:
	float top, bottom, right, left;
	OrthoCamera* o_orthoCamera;
	
};

