#include "GuiBuilder.h"
namespace Gui
{
void GuiBuilder::SetGuiManager(GuiManager & guiManager)
{
	this->guiManager = &guiManager;
}

void GuiBuilder::SetWindow(GLFWwindow & window)
{
	this->window = &window;
}

void GuiBuilder::SetFontAtlas(ImFontAtlas & fontAtlas)
{
	this->fontAtlas = &fontAtlas;
}

std::unique_ptr<Layers::MainMenu> GuiBuilder::CreateMainMenu()
{
	return std::make_unique<Layers::MainMenu>(guiManager, window, fontAtlas);
}
std::unique_ptr<Layers::SinglePlayerMenu> GuiBuilder::CreateSinglePlayerMenu()
{
	return std::make_unique<Layers::SinglePlayerMenu>(guiManager, window, fontAtlas);
}
}