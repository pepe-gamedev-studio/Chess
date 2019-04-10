#include "Renderer.h"
#include <cstdlib>
#include <assert.h>

Renderer::Renderer()
{
	_InitInstance();
}


Renderer::~Renderer()
{
	_DeIninInstance();
}

void Renderer::_InitInstance()
{
	VkInstanceCreateInfo instance_create_info{};
	instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

	auto err = vkCreateInstance(&instance_create_info, nullptr, &_instance);
	if (VK_SUCCESS != err)
	{
		assert(1 && "Vulkan ERROR: Create instance failed.");
		std::exit(-1);
	}
}
void Renderer::_DeIninInstance() 
{
	vkDestroyInstance(_instance, nullptr);
	_instance = nullptr;
}
void Renderer::_InitDevice() 
{

}
void Renderer::_DeInitDevice() 
{

}