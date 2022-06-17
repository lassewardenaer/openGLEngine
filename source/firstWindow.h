#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class FirstWindow
{
public:
    GLFWwindow* window;
public:
    FirstWindow();
    ~FirstWindow();

    int createWindow(const int width, const int height, const char* title);
};