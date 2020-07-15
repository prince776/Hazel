#include "hzpch.h"
#include "Hazel/Core/Input.h"

#ifdef HZ_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsInput.h"
#endif

namespace Hazel {

	Scope<Input> Input::s_Instance = Input::Create();

	Scope<Input> Input::Create()
	{
		#ifdef HZ_PLATFORM_WINDOWS
			return CreateScope<WindowsInput>();
		#else
			HZ_CORE_ASSERT(false, "Input for this platform is not supported yet!");
			return nullptr;
		#endif
	}

}
