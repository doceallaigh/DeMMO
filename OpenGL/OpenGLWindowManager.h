#pragma once
#include "../Graphics/WindowManager.h"
#include "OpenGLWindow.h"

class OpenGLWindowManager : public WindowManager<OpenGLWindow>
{
public:
	static OpenGLWindowManager *GetInstance();
protected:
private:
	OpenGLWindowManager();

	static OpenGLWindowManager* instance;
};