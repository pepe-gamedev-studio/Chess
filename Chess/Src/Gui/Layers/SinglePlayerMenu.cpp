#include "SinglePlayerMenu.h"
#include "Gui/GuiManager.h"

namespace Gui::Layers
{
SinglePlayerMenu::SinglePlayerMenu(Gui::GuiManager * manager, GLFWwindow * window, ImFontAtlas * fontAtlas) : manager(manager), window(window), fontAtlas(fontAtlas) {}
void SinglePlayerMenu::Draw()
{
	ImGui::SetNextWindowPosCenter();
	ImGui::SetNextWindowSize({ 230, 400 });
	ImGui::Begin(u8" ", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove);

	ImGui::PushFont(fontAtlas->Fonts[1]);

	ImGui::SetCursorPos({ 15, 15 });
	ImGui::Button(u8"Player vs Player", { 200, 50 });

	ImGui::SetCursorPosX(15);
	ImGui::Button(u8"Player vs AI", { 200, 50 });

	ImGui::SetCursorPosX(15);
	if (ImGui::Button(u8"Back", { 200, 50 }))
		manager->Switch(Gui::LayerCollection::MAIN_MENU);

	ImGui::PopFont();
	ImGui::End();
}
}