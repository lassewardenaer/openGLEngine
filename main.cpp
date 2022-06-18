#include "source/firstWindow.h"
#include "source/input.h"

int main(int argc, char const *argv[])
{   
    FirstWindow* windowObj = new FirstWindow(800, 500, "OpenGL");
    ProgramInput *input = new ProgramInput();

    while(!glfwWindowShouldClose(windowObj->programWindow))
    {
        input->processInput(windowObj->programWindow);

        glfwSwapBuffers(windowObj->programWindow);
        glfwPollEvents();
    }

    return 0;
}