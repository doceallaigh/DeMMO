#pragma once
#include "../Graphics/Mesh.hpp"

class GameObject 
{
public:
	GameObject(Mesh *mesh);
private:
	Mesh *mesh;
	Transform transform;
};