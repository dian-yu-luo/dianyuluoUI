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

    bool c = true;
    bool k = false;
    GLFWwindow *window = init();
    while (!glfwWindowShouldClose(window))
    {
        begin_of_mainLoop();

        {
            // 交替成就写法
            if (c)
            {
                drawSameple3("okz", &c);
            }
            if (!c)
            {
                k = true;

                drawSameple3("ak", &k);
                if (!k)
                {
                    c = true;
                }
            }

            drawSample();
            drawSameple2("weilai");
        }

        end_of_mainLoop(window);
    }

    stop(window);

    return 0;
}
