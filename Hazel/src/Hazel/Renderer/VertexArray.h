#pragma once

#include "hzpch.h"
#include "Hazel/Renderer/Buffer.h"
#include "Hazel/Core.h"

namespace Hazel {

	class HAZEL_API VertexArray
	{
	public:
		virtual ~VertexArray() = default;

		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;

		virtual void AddVertexBuffer(const Hazel::Ref<VertexBuffer>& vertexBuffer) = 0;
		virtual void SetIndexBuffer(const Hazel::Ref<IndexBuffer>& indexBuffer) = 0;
			
		virtual const std::vector<Hazel::Ref<VertexBuffer>>& GetVertexBuffers() const = 0;
		virtual const Hazel::Ref<IndexBuffer>& GetIndexBuffer() const = 0;

		static VertexArray* Create();
	};
}