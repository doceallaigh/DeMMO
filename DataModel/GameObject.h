#pragma once
#include "../Graphics/Mesh.h"

class GameObject 
{
public:
	GameObject(Mesh *mesh);
private:
	Mesh *mesh;
	Transform transform;
};