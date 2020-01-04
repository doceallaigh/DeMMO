#pragma once
#include "../../Graphics/Header/WindowManager.hpp"
#include "../../Graphics/Header/Window.hpp"

class OpenGLWindowManager : public WindowManager<Window>
{
public:
	static OpenGLWindowManager *GetInstance();
protected:
private:
	OpenGLWindowManager();

	static OpenGLWindowManager* instance;
};