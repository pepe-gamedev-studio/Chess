#include "GuiManager.h"
#include "GuiBuilder.h"
namespace Gui
{
GuiManager::GuiManager(GuiBuilder & builder) : builder(&builder) {}
void GuiManager::Switch(LayerCollection gui)
{
	switch (gui)
	{
	case LayerCollection::MAIN_MENU:
		current = builder->CreateMainMenu();
		break;
	case LayerCollection::SINGLE_PLAYER_MENU:
		current = builder->CreateSinglePlayerMenu();
		break;
	}
}
GuiLayer * GuiManager::Gui() const
{
	return current.get();
}
}