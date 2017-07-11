#include "../Header/Window.hpp"
bool Window::GetFullScreen() 
{
	return this->fullScreen;
}

void Window::SetFullScreen(bool fullScreen) 
{
	bool fullScreenChanged = (this->fullScreen != fullScreen);

	this->fullScreen = fullScreen;

	if (fullScreenChanged)
	{
		this->HandleFullScreenChanged();
	}
}

bool Window::ToggleFullScreen() 
{
	this->SetFullScreen(!this->fullScreen);

	return this->fullScreen;
}