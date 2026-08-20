#include "../include/game.hpp"

typedef enum GameScreen {LOGO = 0, TITLE, GAMEPLAY, SETTING, ENDING} GameScreen;
GameScreen currentScreen = LOGO;

int main() {
	Window w(WIN_WIDTH, WIN_HEIGHT, WIN_TITLE);
	int fps = 0;
	int i = 0;

	w.startWin();
	w.fullScreen();
	while(!WindowShouldClose()) {
		fps++;
		switch (currentScreen) {
			case LOGO:
			{
				if (fps > 1)
					currentScreen = TITLE;
			} break;
			case TITLE:
			{
				if (IsKeyPressed(KEY_SPACE))
					currentScreen = GAMEPLAY;
			} break;
			case GAMEPLAY:
			{
				if (IsGestureDetected(GESTURE_TAP))
					i++;
				if (i > 10) {
					i = 0;
					currentScreen = ENDING;
				}
			} break;
			case ENDING:
			{
				if (IsKeyPressed(KEY_SPACE) || IsGestureDetected(GESTURE_TAP))
					currentScreen = TITLE;
			} break;
			default: break;
		}
		ClearBackground(WHITE);
		switch (currentScreen)
		{
			case LOGO:
			{
				drawLogo();
			} break;
			case TITLE:
			{
				drawTitle();
			} break;
			case GAMEPLAY:
			{
				drawGameplay();
			} break;
			case ENDING:
			{
				BeginDrawing();
				drawMiddle("END!!", 50, GREEN);
				EndDrawing();
			}
			default:
				break;
		}
	}
}
