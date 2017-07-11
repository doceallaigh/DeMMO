#pragma once
#include "Camera.hpp"
#include "Mesh.hpp"

class RenderTarget 
{
public:
	// TODO Split this out into a class file
	RenderTarget() : camera(nullptr)
	{
	}

	virtual void Render(const Mesh& mesh) = 0;

	void BindCamera(Camera* camera) { this->camera = camera; }
protected:
	Camera* camera;
private:
};