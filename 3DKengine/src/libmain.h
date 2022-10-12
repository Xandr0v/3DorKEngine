#pragma once
#include "pch.h"

namespace dk
{
    GLFWwindow *window;
    unsigned int shaderProgram, VBO, VAO;
    bool Init(int x, int y, const char *name);
    int Main(void (*loop)());
    void drawTriangle();
}