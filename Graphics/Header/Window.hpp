#pragma once
#include <memory>

#include "../Header/RenderTarget.hpp"

class Window : public RenderTarget
{
public:
	Window();
	void SetActive(void);

	bool GetFullScreen();
	void SetFullScreen(bool fullScreen);
	bool ToggleFullScreen();
	void Render(const Mesh& mesh);
protected:
	void HandleFullScreenChanged();

	bool fullScreen;
	int x, y, width, height;
private:
	struct impl;
	std::unique_ptr<impl> pImpl;
};