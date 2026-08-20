#include "../include/score.hpp"

score::score(void){}

void score::addScore(int value){m_score.push_back(value);}

void score::showScore()
{
    DrawText("Score", 100, 50, 30, BLACK);
    int y = 100;
    for (size_t i = 0; i < m_score.size(); i++)
    {
        std::string text = std::to_string(i + 1) + ". " + std::to_string(m_score[i]);
        DrawText(text.c_str(), 100, y, 30, BLACK);
        y += 30;
    }
}

score::~score(){}