#include "libmain.h"

GLFWwindow* window;



bool init(int x, int y, const char *name)
{
    if (!glfwInit())
        return -1;


    window = glfwCreateWindow(x, y, name, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }


    glfwMakeContextCurrent(window);
}




void startLoop(void (*loop)())
{
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        loop();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}



