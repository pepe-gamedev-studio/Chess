#pragma once
//#include "GuiLayer.h"
#include "Layers.h"

#include <memory>
namespace Gui
{
class GuiBuilder;
class GuiManager
{
public:
	explicit GuiManager(GuiBuilder& builder);
	void Switch(LayerCollection gui);
	GuiLayer* Gui() const;
private:
	GuiBuilder* builder;
	std::unique_ptr<GuiLayer> current;
};
}