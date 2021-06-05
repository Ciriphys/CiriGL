#pragma once

#include <GL/glew.h>

class IndexBuffer
{
public:
	IndexBuffer(unsigned int sizeInBytes, unsigned int * data, unsigned int usage = GL_STATIC_DRAW);
	~IndexBuffer();

	unsigned int GetCount() const;

	void Enable() const;
	void Disable() const;

private:
	unsigned int m_BufferId;
	unsigned int m_Count;
};