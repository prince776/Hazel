#include "hzpch.h"
#include "Hazel/Core/Window.h"

#ifdef HZ_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Hazel {

	Scope<Window> Window::Create(const WindowProps& props /* = WindowProps() */)
	{
		#ifdef HZ_PLATFORM_WINDOWS
			return CreateScope<WindowsWindow>(props);
		#else
			HZ_CORE_ASSERT(false, "Window for this platform isn't supported");
			return nullptr;
		#endif
	}

}
