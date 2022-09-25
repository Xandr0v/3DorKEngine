#pragma once
#include "pch.h"
namespace dk
{

    GLFWwindow* window;
    void ErrorCallback(int, const char* err_str);
    bool init(int x, int y, const char *name);

    void startLoop(void (*loop)());

    void drawTriangle();


}