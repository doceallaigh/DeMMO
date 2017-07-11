#include "Mesh.hpp"

Mesh::Mesh(
	std::vector<Transform> vertexBuffer,
	std::vector<Transform> textureCoordinateBuffer,
	std::vector<Vector> normalBuffer,
	std::vector<Transform> parameterCoordinateBuffer,
	std::vector<unsigned short> vertexIndexBuffer,
	std::vector<unsigned short> textureIndexBuffer,
	std::vector<unsigned short> normalIndexBuffer,
	std::vector<unsigned short> parameterIndexBuffer) :
	vertexBuffer(vertexBuffer),
	textureCoordinateBuffer(textureCoordinateBuffer),
	normalBuffer(normalBuffer),
	parameterCoordinateBuffer(parameterCoordinateBuffer),
	vertexIndexBuffer(vertexIndexBuffer),
	textureIndexBuffer(textureIndexBuffer),
	normalIndexBuffer(normalIndexBuffer),
	parameterIndexBuffer(parameterIndexBuffer),
	material(nullptr)
{
}

void Mesh::BindMaterial(Material* material) 
{
	this->material = material;
}

std::vector<Transform> Mesh::GetVertexBuffer(void) const
{
	return this->vertexBuffer;
}

std::vector<Transform> Mesh::GetTextureBuffer(void) const
{
	return this->textureCoordinateBuffer;
}

std::vector<Vector> Mesh::GetNormalBuffer(void) const
{
	return this->normalBuffer;
}

std::vector<Transform> Mesh::GetParameterBuffer(void) const
{
	return this->parameterCoordinateBuffer;
}

std::vector<unsigned short> Mesh::GetVertexIndices(void) const
{
	return this->vertexIndexBuffer;
}

std::vector<unsigned short> Mesh::GetTextureIndices(void) const
{
	return this->textureIndexBuffer;
}

std::vector<unsigned short> Mesh::GetNormalIndices(void) const
{
	return this->normalIndexBuffer;
}

std::vector<unsigned short> Mesh::GetParameterIndices(void) const
{
	return this->parameterIndexBuffer;
}