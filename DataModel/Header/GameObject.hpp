#pragma once
#include "../../Graphics/Header/Mesh.hpp"
#include "Transform.hpp"

class GameObject 
{
public:
	GameObject(Mesh *mesh);
private:
	Mesh *mesh;
	Transform transform;
};
