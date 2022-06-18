#include <vector>
#include <glad/glad.h>

class Triangle
{
private:
    float vertices[9];
public:
    unsigned int VBO;
public:
    Triangle(float pos, std::vector<float> x, std::vector<float> y, std::vector<float> z);
    ~Triangle();
};
