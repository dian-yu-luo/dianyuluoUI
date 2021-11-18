#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <stdio.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>
GLFWwindow *init();
static void glfw_error_callback(int error, const char *description);
