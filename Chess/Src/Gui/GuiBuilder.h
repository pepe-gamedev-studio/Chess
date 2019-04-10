#pragma once
#include "Layers.h"

#include <imgui.h>
#include <GLFW/glfw3.h>

#include <memory>

namespace Gui {
class GuiManager;
class GuiBuilder
{
public:
	void SetGuiManager(GuiManager& guiManager);
	void SetWindow(GLFWwindow& window);
	void SetFontAtlas(ImFontAtlas& fontAtlas);

	std::unique_ptr<Layers::MainMenu> CreateMainMenu();
	std::unique_ptr<Layers::SinglePlayerMenu> CreateSinglePlayerMenu();
private:
	GuiManager* guiManager;
	GLFWwindow* window;
	ImFontAtlas* fontAtlas;
};
}