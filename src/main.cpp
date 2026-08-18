#include <iostream>
#include "../include/raylib.h"
#include "../include/engine.hpp"

#define WIN_WIDTH 800
#define WIN_HEIGHT 400
#define WIN_TITLE "Game"
#define IMG_PATH "./img"

int main() {
	Window w(WIN_WIDTH, WIN_HEIGHT, WIN_TITLE);
	int pos_x = 10, pos_y = 20;

	w.startWin();
	// w.fullScreen();
	while(!WindowShouldClose()) {
		BeginDrawing();
		// while (GetKeyPressed()) {
		// 	if (IsKeyPressed(KEY_LEFT))
		// 		pos_x -= 1;
		// 	else if (IsKeyPressed(KEY_RIGHT))
		// 		pos_x += 1;
		// 	else if (IsKeyPressed(KEY_UP))
		// 		pos_y -= 1;
		// 	else if (IsKeyPressed(KEY_DOWN))
		// 		pos_y += 1;
			
		// }
		LoadImage(getFull);
		DrawRectangle(pos_x, pos_y, 20, 10, RED);
		ClearBackground(WHITE);
		EndDrawing();
	}
}
