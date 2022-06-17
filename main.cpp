// A simple introductory program; its main window contains a static picture
// of a triangle, whose three vertices are red, green and blue.  The program
// illustrates viewing with default viewing parameters only.

// Initializes GLUT, the display mode, and main window; registers callbacks;
// enters the main event loop.


#include "source/firstWindow.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
} 

int main(int argc, char const *argv[])
{
    FirstWindow* windowObj = new FirstWindow();
    windowObj->createWindow(800, 500, "OpenGL");

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }   

    glfwSetFramebufferSizeCallback(windowObj->window, framebuffer_size_callback); 

    while(!glfwWindowShouldClose(windowObj->window))
    {
        glfwSwapBuffers(windowObj->window);
        glfwPollEvents();    
    }

    return 0;
}