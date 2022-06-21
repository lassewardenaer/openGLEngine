#ifndef FIRST_WINDOW
#define FIRST_WINDOW

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class FirstWindow
{
public:
    GLFWwindow *programWindow;

public:
    FirstWindow(int width, int height, const char *title);
    ~FirstWindow();
};

#endif