#include "draw.h"
void drawSample()
{
    static bool Sample1 = true;
    ImGui::Begin("jintian ", &Sample1);
    ImGui::End();
}
void drawSameple2(char *w)
{
    static bool Sample1 = true;

    ImGui::Begin(w, &Sample1);
    ImGui::End();
}