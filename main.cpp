#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <stdio.h>
#include "init.h"
#include "stop.h"
#include "end_of_mainLoop.h"

#include <GLFW/glfw3.h> // Will drag system OpenGL headers

int main(int, char **)
{
    GLFWwindow *window = init();
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static bool i1 = true;
            ImGui::Begin("liang", &i1);
            ImGui::Text("今天开心，就这么干 了  ");
            ImGui::End();
            // }
        }

        end_of_mainLoop(window);
    }

    stop(window);

    return 0;
}
