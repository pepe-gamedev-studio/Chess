#pragma once
namespace Gui
{
struct GuiLayer
{
	virtual void Draw() = 0;
	virtual ~GuiLayer() = default;
};
}
