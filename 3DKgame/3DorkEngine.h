#pragma once
#ifndef WIDTH
#define WIDTH 640
#endif
#ifndef HEIGHT
#define HEIGHT 640
#endif
#ifndef NAME
#define NAME "name"
#endif

namespace dk
{
    void startLoop(void ());

    void drawTriangle();

    void init(int x, int y, const char *name);
}

void start();
void loop();



int main()
{

    dk::init(HEIGHT, WIDTH, NAME);
    start();
    dk::startLoop(&loop);
    return 0;
}