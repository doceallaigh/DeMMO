#include <stdio.h>
#include <stdlib.h>

#include "OpenGLWindowManager.h"
#include "OpenGLWindow.h"
#include "../DataModel/AssetManager.h"
#include "../DataModel/Transform.h"
#include "../DataModel/Vector.h"
#include "../Graphics/OBJFactory.h"
#include "../Graphics/Mesh.h"

#pragma comment(lib, "Graphics.lib")
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glfw3dll.lib")

int main() 
{
	
	// Create a window with default properties
	// Set the window as the active window
	// Add suzanne.obj to the scene
	// Render Suzanne until the application is closed

	// Initialize OpenGL with default settings
	OpenGLWindowManager* windowManager = OpenGLWindowManager::GetInstance();
	OpenGLWindow* window = windowManager->GenerateWindow();

	window->SetActive();

	AssetManager<Mesh> meshManager = AssetManager<Mesh>();
	meshManager.AddGenerator(".obj", new OBJFactory());

	Mesh* mesh = meshManager.Generate("suzanne.obj");

	Camera* camera = new Camera();
	camera->clearColor.r = 1.0;
	camera->clearColor.g = 0.0;
	camera->clearColor.b = 0.0;
	camera->clearColor.a = 1.0;
	window->BindCamera(camera);

	window->Render(*mesh);

	while (1);
}