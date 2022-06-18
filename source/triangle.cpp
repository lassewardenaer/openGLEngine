#include "triangle.h"

Triangle::Triangle(float pos, std::vector<float> x, std::vector<float> y, std::vector<float> z)
{
    glGenBuffers(1, &VBO);

    unsigned int numberOfEdges = 3;
    for (unsigned int i = 0; i < numberOfEdges; i++)
    {
        vertices[(i*3)] = x[i];
        vertices[(i*3)+1] = y[i];
        vertices[(i*3)+2] = y[i];
    }
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
}

Triangle::~Triangle()
{
}
