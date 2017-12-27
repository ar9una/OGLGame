#include "Model.h"



Model::Model(unsigned int vaoID,
	unsigned int numVertices,
	unsigned int texturId) 
{
	getTextureID();
	getVaoID();
	getNumVertices();
}

void drawModel(Model* o_Model)
{
	glBindVertexArray(o_Model->getVaoID());
	glBindTexture(GL_TEXTURE_2D, o_Model->getTextureID());
	glDrawArrays(GL_QUADS, 0, o_Model->getNumVertices());
	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

Model::~Model()
{
}
