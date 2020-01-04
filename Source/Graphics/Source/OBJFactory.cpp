#pragma warning(disable:4996)

#include <string>

#include "../Header/OBJFactory.hpp"

std::shared_ptr<Mesh> OBJFactory::Generate(std::string fileName) 
{
	std::vector<Transform> vertexBuffer = std::vector<Transform>();
	std::vector<Transform> textureCoordinateBuffer = std::vector<Transform>();
	std::vector<Vector> normalBuffer = std::vector<Vector>();
	std::vector<Transform> parameterCoordinateBuffer = std::vector<Transform>();
	std::vector<unsigned short> vertexIndexBuffer = std::vector<unsigned short>();
	std::vector<unsigned short> textureIndexBuffer = std::vector<unsigned short>();
	std::vector<unsigned short> normalIndexBuffer = std::vector<unsigned short>();
	std::vector<unsigned short> parameterIndexBuffer = std::vector<unsigned short>();

	// TODO figure out to use fopen_s
	FILE * input = std::fopen(fileName.c_str(), "r");

	if (input)
	{
		// TODO optimize this size
		char line[1024];

		while (std::fgets(line, 1024, input))
		{
			// TODO optimize this into one object
			Transform transform;
			Vector vector;
			int indices[9];

			switch (line[0])
			{
			case 'v':
				switch (line[1])
				{
				case ' ':
					// TODO refactor this out
					sscanf(line, "v %f %f %f", &transform.x, &transform.y, &transform.z);
					vertexBuffer.push_back(transform);
					break;
				case 't':
					// TODO refactor this out
					sscanf(line, "vt %f %f %f", &transform.x, &transform.y, &transform.z);
					textureCoordinateBuffer.push_back(transform);
					break;
				case 'n':
					// TODO refactor this out
					sscanf(line, "vn %f %f %f", &vector.x, &vector.y, &vector.z);
					normalBuffer.push_back(vector);
					break;
				case 'p':
					// TODO refactor this out
					sscanf(line, "vp %f %f %f", &transform.x, &transform.y, &transform.z);
					parameterCoordinateBuffer.push_back(transform);
					break;
				}
				break;
			case 'f':
				// TODO Improve robustness (not all 3 elements are guaranteed to be present)
				// TODO Also figure out what to do for parameter coordinates
				sscanf(line, "f %d/%d/%d %d/%d/%d %d/%d/%d", &indices[0], &indices[1], &indices[2], &indices[3], &indices[4], &indices[5], &indices[6], &indices[7], &indices[8]);
				vertexIndexBuffer.push_back(indices[0] - 1);
				vertexIndexBuffer.push_back(indices[3] - 1);
				vertexIndexBuffer.push_back(indices[6] - 1);
				textureIndexBuffer.push_back(indices[1] - 1);
				textureIndexBuffer.push_back(indices[4] - 1);
				textureIndexBuffer.push_back(indices[7] - 1);
				normalIndexBuffer.push_back(indices[2] - 1);
				normalIndexBuffer.push_back(indices[5] - 1);
				normalIndexBuffer.push_back(indices[8] - 1);
				break;
			default:
				// Discard the line
				break;
			}
		}
	}

	return std::make_shared<Mesh>(vertexBuffer, textureCoordinateBuffer, normalBuffer, parameterCoordinateBuffer, vertexIndexBuffer, textureIndexBuffer, normalIndexBuffer, parameterIndexBuffer);
}