#pragma once
#include <string>

#include "Mesh.hpp"
#include "../DataModel/AssetFactory.hpp"

class OBJFactory : public AssetFactory<Mesh> 
{
public:
	Mesh * Generate(std::string fileName); // TODO this needs to be statically available
};