#include "init.h"

static void glfw_error_callback(int error, const char *description)
{
    fprintf(stderr, "Glfw Error %d: %s\n", error, description);
}

GLFWwindow *init()
{
    // glfw的基础选项配置
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        exit(1);

    const char *glsl_version = "#version 130";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    // 可以添加全屏模式，添加到配置文件里

    // bool isFullScreen = true;
    // int monitorCount;
    GLFWmonitor *pMonitor = glfwGetPrimaryMonitor();
    pMonitor = nullptr;

    GLFWwindow *window = glfwCreateWindow(2160, 1080, "dianyuluo", pMonitor, NULL);

    if (window == NULL)
        exit(1);

    //who can tell me what's meaning it is
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    IMGUI_CHECKVERSION();
    // there ! nothing has come back,who has be influeced
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