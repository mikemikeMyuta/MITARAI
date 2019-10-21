#pragma once

#include "CoreMinimal.h"
#include "EffekseerRendererNative.h"
#include <vector>

namespace EffekseerRendererUE4
{
	/**
		@brief	�V�F�[�_�[
		@note
		���݁FStandardRenderer�����Œ����
	*/
	class Shader
	{
	private:
		std::vector<uint8_t>	vertexConstantBuffer;
		std::vector<uint8_t>	pixelConstantBuffer;

	public:
		Shader();

		virtual ~Shader();

		void* GetVertexConstantBuffer()
		{
			return vertexConstantBuffer.data();
		}

		void* GetPixelConstantBuffer()
		{
			return pixelConstantBuffer.data();
		}

		void SetConstantBuffer()
		{
			// TODO
		}
	};
}