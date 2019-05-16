#pragma once
#include <string>

#include "../Header/Mesh.hpp"
#include "../../DataModel/Header/AssetFactory.hpp"

class OBJFactory
{
public:
	Mesh * Generate(std::string fileName); // TODO this needs to be statically available
};