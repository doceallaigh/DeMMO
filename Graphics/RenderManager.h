#pragma once
#include "Camera.h"
#include "RenderTarget.h"
#include "Mesh.h"

class RenderManager
{
public:
	void BindCameraToTarget(const Camera& camera, const RenderTarget& target);

	// This will likely be replaced with something along the lines of void RenderScene(const Scene& scene)
	// Where Scene contains both a camera and a collection of meshes
	void RenderMesh(const Camera& camera, const Mesh& mesh);

	virtual bool Initialize(void) = 0;
protected:
	bool initialized;
private:
};