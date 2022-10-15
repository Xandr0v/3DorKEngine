#include <iostream>
#include "3DorKEngine.h"

void start()
{
    dk::Init(800, 800, "engine");

    dk::vertices = {
            -0.5f, -0.5f,
            0.5f, -0.5f,
            0.5f,  0.5f,
            -0.5f,  0.5f,
    };

    dk::indices = {
            0, 1, 2,
            2, 3, 0
    };
}

void loop()
{
    dk::draw();
}



