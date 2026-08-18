#include "raylib.h"

class Object {
	public:
		Object(void);
		Object(Vector2 pos);
		Object(int x, int y);
		Object(const Object &ot) = delete;
		Object &operator=(const Object &ot) = delete;
		virtual ~Object() = 0;

		Vector2	getPos(void);
	private:
		float m_x, m_y;
};

class Bread : public Object {

};