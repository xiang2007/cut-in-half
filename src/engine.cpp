#include "../include/raylib.h"
#include "../include/engine.hpp"

Window::Window() :
    m_width(GetScreenWidth()),
    m_height(GetScreenHeight()),
    m_title("GameJam") {SetTargetFPS(60);}

Window::Window(int s_width, int s_height, const char * s_title) :
    m_width(s_width),
    m_height(s_height),
    m_title(s_title) {SetTargetFPS(60);}

Window::~Window() {
    if (m_win_init)
        CloseWindow();
}

void Window::startWin(void) {
    InitWindow(m_width, m_height, m_title);
    m_win_init = 1;
}

void Window::putText(
    const char *text,
    int posX,
    int posY,
    int fontSize = 20,
    Color color = WHITE) const
{
    DrawText(text, posX, posY, fontSize, color);
}

int Window::randNum(int n = 0) {
    int value = 0;
    value = GetRandomValue(0, 999);
    SetRandomSeed(value);
    value = GetRandomValue(0 + n, 10);
    return (value);
}