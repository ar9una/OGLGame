#include "Actor.h"



Actor::Actor() //Node, model class operator
{
	//position, 
}




Actor::~Actor()
{
}

void Actor::rotate()
{
	glm::rotate(rotation, glm::radians(angle), glm::vec3(0.0, 0.0, 1.0));
}
