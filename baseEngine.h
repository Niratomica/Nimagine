#ifndef BASEENGINE_H
#define BASEENGINE_H

#include <iostream>
namespace Nim {
// Window class

struct Window{

	Window(){}

	virtual void Init(int width, int height, const char* title){}

	virtual void FlipBuffer(){}

	virtual void Close(){}

	void* window;

};

// Renderer class

struct Renderer{

	Renderer(){}

};

// Engine class

struct Engine{

	Engine(){}

	virtual void Init(){}

	virtual void TryQuit(){}

	int err = 0;

};

}

#endif