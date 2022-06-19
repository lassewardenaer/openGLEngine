#ifndef INPUT
#define INPUT

#include <GLFW/glfw3.h>

class ProgramInput
{
private:
public:
    ProgramInput();
    ~ProgramInput();

    void processInput(GLFWwindow *window);
};

#endif
