#include <string>

#include "../Header/MeshFactory.hpp"
#include "../Header/Mesh.hpp"

Mesh* MeshFactory::Generate(std::string fileName) 
{
	// TODO figure out an elegant means of calling the appropriate generate function once we're supporting more than OBJ
	return this->Generate_OBJ(fileName);
}

Mesh* MeshFactory::Generate_OBJ(std::string fileName)
{
	return nullptr;
}