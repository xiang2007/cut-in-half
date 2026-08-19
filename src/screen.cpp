#include "../include/game.hpp"

Color pastel_apple_green =  GetColor(0xE4F5EBff);

void drawMiddle(const char* text, int fontSize, Color color)
{
	int textLen = MeasureText(text, fontSize);
	DrawText(text, (GetScreenWidth() - textLen) / 2, (GetScreenHeight() - fontSize) /  2, fontSize, color);
}

void drawLogo(void)
{
	drawMiddle("Game Loading...", 100, BLUE);
}

void drawTitle(void)
{
	const char* loading = "-- Cut In Half --";
	int textLen = MeasureText(loading, 100);
	DrawText(loading, (GetScreenWidth() - textLen) / 2, (GetScreenHeight() - textLen) /  2, 100, GOLD);
	const char* pressEnter = "Press Enter To Start";
	DrawText("Press Space to start", (GetScreenWidth() - MeasureText(pressEnter, 50)) / 2, (GetScreenHeight() - 50) / 1.2, 50, GRAY);
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
	Vector2 mousePos = GetMousePosition();
	Texture2D Image = LoadTexture("img/butter.png");
	int s_width = GetScreenWidth(), s_height = GetScreenHeight();
	DrawRectangle(0, 0, s_width, s_height, pastel_apple_green);
	drawStickV(mousePos, (Vector2){10, 100}, BLUE);
	DrawTexture(Image, 0, 0, WHITE);
}