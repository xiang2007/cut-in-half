#pragma once

#include "raylib.h"
#include <iostream>

class Window{
	public:
		int m_win_init = 0;
		int m_width, m_height;
		const char* m_title;
	
		Window();
		Window(int s_width, int s_height, const char* s_title);
		Window(const Window& ot) = delete;
		Window &operator=(const Window& ot) = delete;
		~Window();

		void			startWin(void);
		void			fullScreen(void) {ToggleFullscreen();}
		void			putText(const char *text, int posX, int posY, int fontSize, Color color) const;
		static int		randNum(int n);

};