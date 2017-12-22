#include "ViewPort.h"


ViewPort::ViewPort(float top, float bottom, float right, float left)
{
	this->top = top;
	this->bottom = bottom;
	this->right = right;
	this->left = left;

	
	o_orthoCamera->projection = glm::ortho(left, right, bottom, top, 0.01f,1000.0f);

	o_orthoCamera->combinedMatrix = o_orthoCamera->projection * o_orthoCamera->view;;

}




ViewPort::~ViewPort()
{
}
