#include "../include/objects.hpp"

Object::Object()
    : m_x(0), m_y(0)
{
}

Object::Object(Vector2 pos)
    : m_x(pos.x), m_y(pos.y)
{
}
Object::Object(Vector2 pos, const char* pathToImage)
    : m_x(pos.x), m_y(pos.y)
{
    setImage(pathToImage);
}

Object::Object(int x, int y)
    : m_x(x), m_y(y)
{
}

Object::Object(float x, float y)
    : m_x(x), m_y(y)
{
}

Object::~Object()
{
    if (m_textureLoaded)
        UnloadTexture(m_img);
}


Vector2 Object::getPos() const
{
    return {m_x, m_y};
}

Texture2D& Object::getTexture()
{
    return m_img;
}

void Object::setImage(const char* path)
{
    m_img = LoadTexture(path);
    m_textureLoaded = true;
}

void Object::draw(Vector2 pos, float rot, float scale, Color color)
{
    DrawTextureEx(m_img, pos, rot, scale, color);
}

int Object::getWidthScaled(float scale) const
{
    return m_img.width * scale;
}

int Object::getHeightScaled(float scale) const
{
    return m_img.height * scale;
}
