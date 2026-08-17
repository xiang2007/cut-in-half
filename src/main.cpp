#include <iostream>
#include "../include/raylib.h"
#include "../include/engine.hpp"

#define WIN_WIDTH 800
#define WIN_HEIGHT 400
#define WIN_TITLE "Game"

int main() {
	Window w(WIN_WIDTH, WIN_HEIGHT, WIN_TITLE);

	w.startWin();
	// w.fullScreen();
	while(!WindowShouldClose()) {
		BeginDrawing();
		w.putText((std::to_string(Window::randNum())).sc)
		EndDrawing();
	}
}
