#include "MainMenu.h"
#include "Gui/GuiManager.h"

namespace Gui::Layers
{
MainMenu::MainMenu(Gui::GuiManager * manager, GLFWwindow * window, ImFontAtlas * fontAtlas) : manager(manager), window(window), fontAtlas(fontAtlas) {}

void MainMenu::Draw()
{
	ImGui::SetNextWindowPosCenter();
	ImGui::SetNextWindowSize({ 230, 400 });
	ImGui::Begin(u8" ", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove);

	ImGui::PushFont(fontAtlas->Fonts[1]);

	ImGui::SetCursorPos({ 15, 15 });
	if (ImGui::Button(u8"Single Player", { 200, 50 }))
		manager->Switch(Gui::LayerCollection::SINGLE_PLAYER_MENU);

	ImGui::SetCursorPosX(15);
	if (ImGui::Button(u8"Exit", { 200, 50 }))
		glfwSetWindowShouldClose(window, GLFW_TRUE);

	ImGui::PopFont();
	ImGui::End();
}
}