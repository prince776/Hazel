#pragma once

// This will be the int main() function that would originally be in the client project.

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	
	HZ_CORE_WARN("Intialized log!");
	int a = 5;
	HZ_CORE_INFO("Var a = {0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Hazel only supports Windows!
#endif