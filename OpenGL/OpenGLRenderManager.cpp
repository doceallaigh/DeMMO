#include "GL/glew.h"
#include "OpenGLRenderManager.h"

bool OpenGLRenderManager::Initialize() 
{
	// Initialize GLEW
	glewExperimental = true; // Needed for core profile

	if (glewInit() != GLEW_OK) 
	{
		// Return failure
		return false;
	}

	// Enable depth test
	glEnable(GL_DEPTH_TEST);

	// Accept fragment if it closer to the camera than the former one
	glDepthFunc(GL_LESS);

	// Cull triangles which normal is not towards the camera
	glEnable(GL_CULL_FACE);

	// Return success
	return true;
}