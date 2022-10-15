#pragma once
#include "pch.h"
#include <iostream>
#include <vector>

namespace dk
{
    GLFWwindow *window;
    unsigned int shaderProgram, VBO, VAO, IBO;
    std::vector<float> vertices;
    std::vector<unsigned int> indices;
    bool Init(int x, int y, const char *name);
    unsigned int compileShader(unsigned int type, const std::string& source);
    unsigned int createShader(const std::string& vertexShader, const std::string& fragmentShader);
    int Main(void (*loop)());
    void draw();
}