#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <stdio.h>
#include "init.h"
#include "stop.h"
#include "begin_of_mainLoop.h"
#include "end_of_mainLoop.h"
#include <Windows.h>

#include <GLFW/glfw3.h> // Will drag system OpenGL headers

int main(int, char **)
{
    GLFWwindow *window = init();
    while (!glfwWindowShouldClose(window))
    {
        begin_of_mainLoop();

        {
            static bool i1 = true;
            ImGui::Begin("liang", &i1);
            ImGui::Text("all is right");
            ImGui::End();
        }

        end_of_mainLoop(window);
    }

    stop(window);

    return 0;
}
