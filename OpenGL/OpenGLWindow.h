#pragma once
#include <GLFW/glfw3.h>
#include "../Graphics/Window.h"

class OpenGLWindow : public Window 
{
public:
	OpenGLWindow();

	// TODO This should probably be replaced with something to render an entire scene
	void Render(const Mesh& mesh);
	void SetActive();
protected:
	void HandleFullScreenChanged();
private:
	GLFWmonitor* monitor;
	GLFWwindow* window;
};