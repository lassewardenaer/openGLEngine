#include "source/firstWindow.h"
#include "source/input.h"
#include "source/triangle.h"

int main(int argc, char const *argv[])
{   
    FirstWindow* windowObj = new FirstWindow(800, 500, "OpenGL");
    ProgramInput *input = new ProgramInput();
    Triangle *triangle = new Triangle(
        0, 
        {-0.5f, 0.5f, 0.0f}, 
        {-0.5f, -0.5f, 0.5f}, 
        {0.0f, 0.5f, 0.0f}); 

    while(!glfwWindowShouldClose(windowObj->programWindow))
    {
        // input
        input->processInput(windowObj->programWindow);

        // rendering commands
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(triangle->shaderProgram);
        glBindVertexArray(triangle->VAO);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        // check and call events and swap the buffers
        glfwSwapBuffers(windowObj->programWindow);
        glfwPollEvents();
    }

    return 0;
}