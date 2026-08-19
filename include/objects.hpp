#pragma once

#include "raylib.h"

class Object {
	public:
		Object(void);
		Object(Vector2 pos);
		Object(int x, int y);
		Object(float x, float y);
		Object(const Object &ot) = delete;
		Object &operator=(const Object &ot) = delete;
		virtual ~Object() = 0;

		Vector2		getPos(void);
		Texture2D	getImage(void);
		Texture2D	getTexture(void);
		void		setImage(const char* pathToImage);
		void		drawImage(int x, int y, Color color);

	protected:
		int			m_textureLoaded = 0;
		float		m_x, m_y;
		Vector2		m_vec;
		Texture2D 	m_img;
		const char	*m_pathToImg;
};

class Butter : public Object {
	Butter(){}
	Butter(Vector2 pos) : Object(pos){}
	Butter(int x, int y) : Object(x, y){}
	Butter(float x, float y) : Object(x, y){}
	Butter(const Butter& ot) = delete;
	Butter &operator=(const Butter& ot) = delete;
	~Butter(){if (m_textureLoaded == 1) UnloadTexture(m_img);}
};