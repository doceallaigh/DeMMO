#pragma once
#include <string>

#include "Mesh.h"
#include "../DataModel/AssetFactory.h"

class OBJFactory : public AssetFactory<Mesh> 
{
public:
	Mesh * Generate(std::string fileName); // TODO this needs to be statically available
};