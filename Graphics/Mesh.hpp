#pragma once
#include <vector>

#include "Material.hpp"
#include "../DataModel/Transform.hpp"
#include "../DataModel/Vector.hpp"

class Mesh 
{
public:
	Mesh(
		std::vector<Transform> vertexBuffer,
		std::vector<Transform> textureCoordinateBuffer,
		std::vector<Vector> normalBuffer,
		std::vector<Transform> parameterCoordinateBuffer,
		std::vector<unsigned short> vertexIndexBuffer,
		std::vector<unsigned short> textureIndexBuffer,
		std::vector<unsigned short> normalIndexBuffer,
		std::vector<unsigned short> parameterIndexBuffer);

	void BindMaterial(Material* material);

	std::vector<Transform> GetVertexBuffer(void) const;
	std::vector<Transform> GetTextureBuffer(void) const;
	std::vector<Vector> GetNormalBuffer(void) const;
	std::vector<Transform> GetParameterBuffer(void) const;
	std::vector<unsigned short> GetVertexIndices(void) const;
	std::vector<unsigned short> GetTextureIndices(void) const;
	std::vector<unsigned short> GetNormalIndices(void) const;
	std::vector<unsigned short> GetParameterIndices(void) const;
protected:
private:
	std::vector<Transform> vertexBuffer;
	std::vector<Transform> textureCoordinateBuffer;
	std::vector<Vector> normalBuffer;
	std::vector<Transform> parameterCoordinateBuffer;
	std::vector<unsigned short> vertexIndexBuffer;
	std::vector<unsigned short> textureIndexBuffer;
	std::vector<unsigned short> normalIndexBuffer;
	std::vector<unsigned short> parameterIndexBuffer;
	Material* material;
};