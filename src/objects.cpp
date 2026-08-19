#include "../include/raylib.h"
#include "../include/objects.hpp"

Object::Object(void) :m_x(0), m_y(0), m_vec((Vector2){0, 0}), m_pathToImg(nullptr) {}

Object::Object(Vector2 pos) : m_x(pos.x), m_y(pos.y), m_vec(pos), m_pathToImg(nullptr) {}

Object::Object(int x, int y) : m_x(x), m_y(y), m_vec((Vector2){(float)x, (float)y}), m_pathToImg(nullptr) {}

Object::Object(float x, float y) : m_x(x), m_y(y), m_vec((Vector2){x, y}), m_pathToImg(nullptr) {}

Vector2 Object::getPos(void) {return (m_vec);}

Texture2D Object::getImage(void) {return (m_img);}

Texture2D Object::getTexture(void) {return m_img;}

void Object::setImage(const char* pathToImage) {m_img = LoadTexture(pathToImage); m_textureLoaded = 1;}

void Object::drawImage(int x, int y, Color color)
{
    DrawTexture(m_img, x, y, color);
}