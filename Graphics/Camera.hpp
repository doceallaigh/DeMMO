#pragma once
#include "../DataModel/Transform.hpp"
#include "Color.hpp"

struct Camera 
{
	float nearClip, farClip;
	float fovX, fovY;
	Transform location;
	Color clearColor;
};