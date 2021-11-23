#include <stdio.h>
#include "init.h"
#include "stop.h"
#include "begin_of_mainLoop.h"
#include "end_of_mainLoop.h"
#include <draw.h>
#include <jsfile.h>
#include "iostream"

int main(int, char **) {

    jsfile j;
    j.setA(1);
    std::cout<<j.getA();
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
