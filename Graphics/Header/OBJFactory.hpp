#pragma once
#include "../Header/Mesh.hpp"
#include "../../DataModel/Header/AssetFactory.hpp"

class OBJFactory : public AssetFactory<Mesh> 
{
public:
	Mesh * Generate(std::string fileName); // TODO this needs to be statically available
};