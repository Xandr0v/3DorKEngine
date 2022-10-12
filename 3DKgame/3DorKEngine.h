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
    void Init(int x, int y, const char *name);
    int Main(void ());
    void drawTriangle();
}

void start();
void loop();



int main()
{
    dk::Init(HEIGHT, WIDTH, NAME);
    start();
    dk::Main(&loop);

    return 0;
}