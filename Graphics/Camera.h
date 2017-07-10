#pragma once
#include "../DataModel/Transform.h"
#include "Color.h"

struct Camera 
{
	float nearClip, farClip;
	float fovX, fovY;
	Transform location;
	Color clearColor;
};