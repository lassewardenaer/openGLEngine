#include "source/firstWindow.h"
#include "source/input.h"
#include "source/triangle.h"
#include "source/shaders/shader.h"

int main(int argc, char const *argv[])
{
    FirstWindow windowObj(800, 500, "OpenGL");
    ProgramInput programInput;
    Triangle triangle;

    while (!glfwWindowShouldClose(windowObj.programWindow))
    {
        // input
        programInput.processInput(windowObj.programWindow);

        // rendering commands
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        triangle.show();

        // check and call events and swap the buffers
        glfwSwapBuffers(windowObj.programWindow);
        glfwPollEvents();
    }

    return 0;
}