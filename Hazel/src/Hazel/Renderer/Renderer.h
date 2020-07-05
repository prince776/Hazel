#pragma once

#include "RenderCommand.h"

namespace Hazel {

	class HAZEL_API Renderer
	{
	public:
		inline static RendererAPI::API GetAPI() { return RendererAPI::GetAPI(); }
		
		static void BeginScene();
		static void EndScene();

		static void Submit(const std::shared_ptr<VertexArray>& VertexArray);

	};

}
