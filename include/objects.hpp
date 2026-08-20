#pragma once

#include "raylib.h"

class Object
{
public:
    Object();
    Object(Vector2 pos);
    Object(Vector2 pos, const char* pathToImage);
    Object(int x, int y);
    Object(float x, float y);
    Object(const Object& ot) = delete;
    Object& operator=(const Object&) = delete;
    virtual ~Object();

    Vector2 getPos() const;
    Texture2D& getTexture();
    void setImage(const char* path);
    void draw(Vector2 pos, float rot, float scale, Color color);
    int getWidthScaled(float scale) const;
    int getHeightScaled(float scale) const;

protected:
    Texture2D m_img{};
    bool m_textureLoaded = false;
    float m_x = 0;
    float m_y = 0;
};
