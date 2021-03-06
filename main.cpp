#include <stdio.h>
#include "init.h"
#include "stop.h"
#include "begin_of_mainLoop.h"
#include "end_of_mainLoop.h"
#include <Windows.h>
#include <draw.h>

#include <GLFW/glfw3.h> // Will drag system OpenGL headers

int main(int, char **)
{
    GLFWwindow *window = init();
    while (!glfwWindowShouldClose(window))
    {
        begin_of_mainLoop();

        {
            drawSample();
            drawSameple2("weilai");
        }

        end_of_mainLoop(window);
    }

    stop(window);

    return 0;
}
