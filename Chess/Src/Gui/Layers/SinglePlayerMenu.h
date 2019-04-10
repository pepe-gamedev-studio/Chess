#pragma once
#include "Gui/GuiLayer.h"

#include <imgui.h>
#include <GLFW/glfw3.h>

namespace Gui
{
class GuiManager;
}

namespace Gui::Layers
{
class GuiManager;
class SinglePlayerMenu : public Gui::GuiLayer
{
public:
	explicit SinglePlayerMenu(Gui::GuiManager* manager, GLFWwindow* window, ImFontAtlas* fontAtlas);
	virtual void Draw() override;
private:
	Gui::GuiManager* manager;
	GLFWwindow* window;
	ImFontAtlas* fontAtlas;
};
}