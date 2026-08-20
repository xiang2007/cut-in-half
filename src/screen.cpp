#include "../include/game.hpp"

Color pastel_apple_green =  GetColor(0xE4F5EBff);
score sb;

void drawMiddle(const char* text, int fontSize, Color color)
{
	int textLen =
 MeasureText(text, fontSize);
	DrawText(text, (GetScreenWidth() - textLen) / 2, (GetScreenHeight() - fontSize) /  2, fontSize, color);
}

void drawLogo(void)
{
	BeginDrawing();
	drawMiddle("Game Loading...", 100, BLUE);
	EndDrawing();
}

void drawTitle(void)
{
	BeginDrawing();
	const char* loading = "-- Cut In Half --";
	int textLen = MeasureText(loading, 100);
	DrawText(loading, (GetScreenWidth() - textLen) / 2, (GetScreenHeight() - textLen) /  2, 100, GOLD);
	const char* pressEnter = "Press Enter To Start";
	DrawText("Press Space to start", (GetScreenWidth() - MeasureText(pressEnter, 50)) / 2, (GetScreenHeight() - 50) / 1.2, 50, GRAY);
	EndDrawing();
}

void drawStick(Vector2 vec, int width, int height, Color color)
{
	DrawRectangle(vec.x, vec.y, width, height, color);
	DrawRectangle(vec.x, vec.y - height, width, height, color);
}

void drawStickV(Vector2 vec, Vector2 size, Color color)
{
	DrawRectangleV(vec, size, color);
	DrawRectangleV((Vector2){vec.x, vec.y - size.y}, size, color);
}

void drawGameplay(void)
{
	Object	b1(0, 0);
	BeginDrawing();
	b1.setImage("img/nasi_lemak.png");
	int s_width = GetScreenWidth(), s_height = GetScreenHeight();
	DrawRectangle(0, 0, s_width, s_height, pastel_apple_green);
	b1.draw((Vector2){((float)s_width-b1.getWidthScaled(10))/2,
		((float)s_height-b1.getWidthScaled(10))}, 0, 10, WHITE);
	Vector2 mousePos = GetMousePosition();
	drawStickV(mousePos, (Vector2){10, 100}, BLUE);
	sb.showScore();
	if (IsGestureDetected(GESTURE_TAP)) {
		sb.addScore((int)(mousePos.x - (b1.getWidthScaled(10) - 80)));
	}
	EndDrawing();
}