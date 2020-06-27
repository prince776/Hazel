#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();

	};

	// To be defined in client.
	// Client App will extends this base class and then implement this function, that will return the client app
	// so that it can be started in the entrypoint
	Application* CreateApplication();

}