#pragma once
enum class TransformType 
{
	Scale,
	Rotation,
	Translation,
};

class Transform 
{
public:
	Transform() : x(0.0f), y(0.0f), z(0.0f) {}

	float x, y, z;
};