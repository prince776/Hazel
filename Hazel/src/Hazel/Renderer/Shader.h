#pragma once

#include "Hazel/Core.h"
#include <glm/glm.hpp>

namespace Hazel {
	
	class HAZEL_API Shader
	{
	public:
		virtual ~Shader() = default;

		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;
	public:
		static Shader* Create(const std::string& filepath);
		static Shader* Create(const std::string& vertexSrc, const std::string& fragmentSrc);
	};
}
