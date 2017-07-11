#pragma once
#include "../../DataModel/Header/Transform.hpp"
#include "../Header/Color.hpp"

struct Camera 
{
	float nearClip, farClip;
	float fovX, fovY;
	Transform location;
	Color clearColor;
};