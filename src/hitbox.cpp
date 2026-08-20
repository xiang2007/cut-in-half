#include "../include/hitbox.hpp"

hitBox::hitBox() : m_x(0) ,m_y(0), m_v((Vector2){0, 0}) {}

hitBox::hitBox(int x, int y) : m_x(x), m_y(y){}

hitBox::hitBox(int x, int y, int width, int height, Color color) : m_x(x), m_y(y), m_v((Vector2){x, y}), m_width(0), m_height(height), m_color(color) {}

hitBox::~hitBox(){}

// void hitBox::createRecHitBox(int x, int y, int width, int height, Color color)
// {
//     DrawRectangle(x, y, )
// }

