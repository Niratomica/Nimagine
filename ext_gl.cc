#include "ext_gl.h"

namespace Nim{

	// Engine definitions

	void GLEngine::Init(){

		if ( glfwInit() == 0 ){

			err = -1;

		}

		

	}

	void GLEngine::TryQuit(){

		glfwTerminate();

	}

	// Window definitions

	void GLWindow::Init(int width, int height, const char* title){

		window = glfwCreateWindow(width, height, title, NULL, NULL);

		glfwMakeContextCurrent(window);

		if(!window) printf("Window creation failed.\n");

	}

	void GLWindow::FlipBuffer(){

		glfwSwapBuffers(window);

	}

	void GLWindow::Close(){

		glfwDestroyWindow(window);

	}

}