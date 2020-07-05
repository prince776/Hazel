#include "hzpch.h"
#include "Renderer.h"

namespace Hazel {



	void Renderer::BeginScene()
	{
		// Nothing to do here right now.
	}

	void Renderer::EndScene()
	{
		// Nothing to do here right now.
	}

	void Renderer::Submit(const std::shared_ptr<VertexArray>& VertexArray)
	{
		VertexArray->Bind();
		RenderCommand::DrawIndexed(VertexArray);
	}

}
