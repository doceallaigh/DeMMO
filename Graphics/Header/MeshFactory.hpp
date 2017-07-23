#pragma once
#include "Mesh.hpp"

class MeshFactory
{
public:
    Mesh* Generate (std::string fileName);

    Mesh* Generate_OBJ (std::string fileName);
};
