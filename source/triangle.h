#ifndef TRIANGLE
#define TRIANGLE

#include <vector>
#include <glad/glad.h>

class Triangle
{
private:
    float vertices[9];
    unsigned int vertexShader;
    unsigned int fragmentShader;
    unsigned int VBO;
public:
    unsigned int shaderProgram;
    unsigned int VAO;
public:
    Triangle(float pos, std::vector<float> x, std::vector<float> y, std::vector<float> z);
    ~Triangle();
};

#endif
