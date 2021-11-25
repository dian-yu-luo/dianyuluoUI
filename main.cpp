#include <stdio.h>
#include "init.h"
#include "stop.h"
#include "begin_of_mainLoop.h"
#include "end_of_mainLoop.h"
#include <draw.h>


int main(int, char **) {

    GLFWwindow *window = init();
    while (!glfwWindowShouldClose(window)) {
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
