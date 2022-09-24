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

void startLoop(void ());
void drawTriangle();
void init(int x, int y, const char* name);

void start();
void loop();



int main()
{

    init(HEIGHT, WIDTH, NAME);
    start();
    startLoop(&loop);
    return 0;
}