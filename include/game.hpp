#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "raylib.h"
#include "engine.hpp"
#include "utils.hpp"
#include "objects.hpp"
#include "screen.hpp"
#include "score.hpp"

#ifndef WIN_WIDTH
# define WIN_WIDTH 1920
#endif

#ifndef WIN_HEIGHT
# define WIN_HEIGHT 1080
#endif

#ifndef WIN_TITLE
# define WIN_TITLE "Game"
#endif

void drawMiddle(const char* text, int fontSize, Color color);
