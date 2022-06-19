#include "input.h"

void ProgramInput::processInput(GLFWwindow *window) 
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

ProgramInput::ProgramInput(){}
ProgramInput::~ProgramInput(){}