#include "firstWindow.h"

FirstWindow::FirstWindow()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

FirstWindow::~FirstWindow()
{
    glfwTerminate();
}

int FirstWindow::createWindow(const int width, const int height, const char* title) {
    this->window = glfwCreateWindow(width, height, title, NULL, NULL);

    if (this->window == NULL)
    {
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
    return -1;
    }
    glfwMakeContextCurrent(this->window);

    glViewport(0, 0, width, height);
    
    return 0;
}
