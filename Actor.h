#pragma once
#include "Header.h"
class Actor
{
public:
	Actor();
	~Actor();

	void drawActor() {
		o_Model->drawModel(o_Model);
	}


private:
	Model *o_Model;
};

