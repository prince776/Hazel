#pragma once

#include "Hazel/Core.h"
#include "Hazel/Renderer/RendererAPI.h"

namespace Hazel {

	class HAZEL_API OpenGLRendererAPI : public RendererAPI
	{
	public:
		virtual void SetClearColor(const glm::vec4& color) override;
		virtual void Clear() override;

		virtual void DrawIndexed(const Hazel::Ref<VertexArray>& vertexArray) override;
	};

}
