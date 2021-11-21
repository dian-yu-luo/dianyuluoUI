#include "init.h"

static void glfw_error_callback(int error, const char *description)
{
    fprintf(stderr, "Glfw Error %d: %s\n", error, description);
}

GLFWwindow *init()
{
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        exit(1);

    const char *glsl_version = "#version 130";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    GLFWwindow *window = glfwCreateWindow(2160, 1080, "dianyuluo", NULL, NULL);

    if (window == NULL)
        exit(1);
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

    ImGui::StyleColorsDark();
  

    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);

    ImFont *font = io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\SIMKAI.ttf", 20.0f, NULL, io.Fonts->GetGlyphRangesChineseSimplifiedCommon());

    return window;
}