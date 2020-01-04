#pragma once
#include <string>

#include "../Header/Mesh.hpp"

class OBJFactory
{
public:
	std::shared_ptr<Mesh> Generate(std::string fileName);
};