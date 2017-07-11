#pragma once
#include "../Graphics/WindowManager.hpp"
#include "OpenGLWindow.hpp"

class OpenGLWindowManager : public WindowManager<OpenGLWindow>
{
public:
	static OpenGLWindowManager *GetInstance();
protected:
private:
	OpenGLWindowManager();

	static OpenGLWindowManager* instance;
};