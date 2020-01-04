#include <stdio.h>
#include <stdlib.h>

#include "../Header/OpenGLWindowManager.hpp"
#include "../../Graphics/Header/Window.hpp"
#include "../../DataModel/Header/AssetManager.hpp"
#include "../../Graphics/Header/Mesh.hpp"
#include "../../Graphics/Header/OBJFactory.hpp"
#include "../../Graphics/Header/Camera.hpp"

int main()
{
	// Create a window with default properties
	// Set the window as the active window
	// Add suzanne.obj to the scene
	// Render Suzanne until the application is closed

	// Initialize OpenGL with default settings
	OpenGLWindowManager* windowManager = OpenGLWindowManager::GetInstance();
	Window* window = windowManager->GenerateWindow();

	window->SetActive();

	AssetManager<Mesh> meshManager = AssetManager<Mesh>();
	auto lambda = [](std::string name) 
	{ 
		auto objFactory = OBJFactory(); // TODO_BEFORE_MERGE Less expensive way to make this work?
		return objFactory.Generate(name); 
	};
	meshManager.AddGenerator(std::string(".obj"), lambda);

	auto mesh = meshManager.Generate(std::string("C:\\Source\\DeMMO\\Resources\\suzanne.obj"));

	Camera* camera = new Camera();
	camera->clearColor.r = 1.0;
	camera->clearColor.g = 0.0;
	camera->clearColor.b = 0.0;
	camera->clearColor.a = 0.0;
	window->BindCamera(camera);

	while (true)
	{
		window->Render(*mesh);
	}
}