#pragma once
#include <vector>

namespace dk
{
    void Init(int x, int y, const char *name);
    int Main(void ());
    void draw();
    extern std::vector<float> vertices;
    extern std::vector<unsigned int> indices;
}

void start();
void loop();



int main()
{
    start();
    dk::Main(&loop);
    return 0;
}