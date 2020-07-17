#pragma once

#include "Core.h"

#include "Window.h"
#include "Hazel/Core/LayerStack.h"
#include "Hazel/Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"

#include "Hazel/Core/Timestep.h"

#include "Hazel/ImGui/ImGuiLayer.h"

int main(int argc, char** argv);

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application() = default;
		
	
		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		void Close();

		static Application& Get() { return *s_Instance; }
		Window& GetWindow() { return *m_Window; }
	private:
		void Run();
		bool OnWindowClosed(WindowCloseEvent& e);
		bool OnWindowResize(WindowResizeEvent& e);
	private:
		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		bool m_Minimized = false;
		LayerStack m_LayerStack;
	
		float m_LastFrameTime = 0.0f;
	private:
		static Application* s_Instance;
		friend int ::main(int argc, char** argv);
	};

	// To be defined in client.
	// Client App will extends this base class and then implement this function, that will return the client app
	// so that it can be started in the entrypoint
	Application* CreateApplication();

}
