#pragma once

#include "Hazel/Core/Layer.h"

#include "Hazel/Events/Event.h"
#include "Hazel/Events/MouseEvent.h"
#include "Hazel/Events/KeyEvent.h"
#include "Hazel/Events/ApplicationEvent.h"

#include "Hazel/Core/Core.h"

namespace Hazel {

	class HAZEL_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		void OnAttach() override;
		void OnDetach() override;
		
		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}