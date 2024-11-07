#ifndef EXT_GL_H
#define EXT_GL_H

#include "baseEngine.h"

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace Nim {

	// Window class

	struct GLWindow : Window{

		GLWindow(){}

		void Init(int width, int height, const char* title);

		void FlipBuffer();

		void Close();

		GLFWwindow* window;

	};

	// Renderer class

	struct GLRenderer : Renderer {

		GLRenderer(){}

	};

	// Engine class

	struct GLEngine : Engine {

		GLEngine(){}

		void Init();

		void TryQuit();

	private:



	};

}

#endif