#pragma once
#include <string>

#include "../Header/Mesh.hpp"

static class OBJFactory
{
public:
	static Mesh * Generate(std::string fileName); // TODO this needs to be statically available
};