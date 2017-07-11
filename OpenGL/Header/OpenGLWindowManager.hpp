#pragma once
#include "../../Graphics/Header/WindowManager.hpp"
#include "../Header/OpenGLWindow.hpp"

class OpenGLWindowManager : public WindowManager<OpenGLWindow>
{
public:
	static OpenGLWindowManager *GetInstance();
protected:
private:
	OpenGLWindowManager();

	static OpenGLWindowManager* instance;
};