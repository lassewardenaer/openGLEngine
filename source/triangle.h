#ifndef TRIANGLE
#define TRIANGLE

#include "shader.h"

#include <vector>
#include <glad/glad.h>

class Triangle
{
private:
    float vertices[9];
    unsigned int vertexShader;
    unsigned int fragmentShader;
    unsigned int VBO;
    Shader shader;

public:
    unsigned int shaderProgram;
    unsigned int VAO;

public:
    Triangle();
    ~Triangle();

    void show();
};

#endif
