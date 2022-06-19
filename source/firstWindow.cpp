#ifndef FIRST_WINDOW
#define FIRST_WINDOW

#include "firstWindow.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);

FirstWindow::FirstWindow(int width, int height, const char* title)
{
glfwInit();
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

programWindow = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);

if (programWindow == NULL)
{
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
}

glfwMakeContextCurrent(programWindow);

if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
{
    std::cout << "Failed to initialize GLAD" << std::endl;
}

glViewport(0, 0, 800, 600);

glfwSetFramebufferSizeCallback(programWindow, framebuffer_size_callback);

}

FirstWindow::~FirstWindow()
{
    glfwTerminate();
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

#endif