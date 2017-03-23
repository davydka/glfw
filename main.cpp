#include <stdlib.h>
#include <stdio.h>
#include <GLFW/glfw3.h>

int main(){
	GLFWwindow* window;
	glfwInit();

	int major, minor, revision;
	glfwGetVersion(&major, &minor, &revision);
	printf("Running against GLFW %i.%i.%i\n", major, minor, revision);

	glfwWindowHint(GLFW_DECORATED, 0);
	window = glfwCreateWindow(320,240,"Window",NULL,NULL);
	glfwMakeContextCurrent(window);
	while(!glfwWindowShouldClose(window)){
			glClear(GL_COLOR_BUFFER_BIT);
			glfwSwapBuffers(window);
			glfwPollEvents();

	}
	glfwTerminate();
	return 0;
}
