#include "source/firstWindow.h"

int main(int argc, char const *argv[])
{   
    FirstWindow* windowObj = new FirstWindow(800, 500, "OpenGL");

    while(!glfwWindowShouldClose(windowObj->programWindow))
    {
        glfwSwapBuffers(windowObj->programWindow);
        glfwPollEvents();
    }

    return 0;
}