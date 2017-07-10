#include <GL/glew.h>

#include "OpenGLWindowManager.h"

OpenGLWindowManager* OpenGLWindowManager::instance = nullptr;

OpenGLWindowManager::OpenGLWindowManager()
{
	if (!glfwInit())
	{
		// TODO throw something more meaningful
		throw 0;
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //  TODO_HIGH this is needed to allow GLEW to init.  Why was it not before?
    OpenGLWindow *window = new OpenGLWindow ();
    window->SetActive();

	// Initialize GLEW
	glewExperimental = true; // Needed for core profile
    GLenum error = glewInit();
	if (error != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
        fprintf(stderr, (char *)(glewGetErrorString(error)));
		getchar();
		glfwTerminate();
	}

	// Enable depth test
	glEnable(GL_DEPTH_TEST);
	// Accept fragment if it closer to the camera than the former one
	glDepthFunc(GL_LESS);

	// Cull triangles which normal is not towards the camera
	glEnable(GL_CULL_FACE);
}

OpenGLWindowManager* OpenGLWindowManager::GetInstance()
{
	if (OpenGLWindowManager::instance == nullptr)
	{
		try 
		{
			OpenGLWindowManager::instance = new OpenGLWindowManager();
		}
		catch(int exception)
		{
			delete OpenGLWindowManager::instance;
			OpenGLWindowManager::instance = nullptr;
			// TODO add logging/error handling
		}
	}

	return OpenGLWindowManager::instance;
}
