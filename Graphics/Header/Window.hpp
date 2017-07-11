#pragma once
#include "../Header/RenderTarget.hpp"

class Window : public RenderTarget
{
public:
	virtual void SetActive(void) = 0;

	bool GetFullScreen();
	void SetFullScreen(bool fullScreen);
	bool ToggleFullScreen();
protected:
	virtual void HandleFullScreenChanged() = 0;

	bool fullScreen;
	int x, y, width, height;
private:
};