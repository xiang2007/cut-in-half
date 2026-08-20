#pragma once

#include "game.hpp"

class score
{
	public:
		score(void);
		score(const score& ot) = delete;
		score &operator=(const score& ot) = delete;
		~score();

		void    addScore(int score);
		void    showScore();
	private:
		std::vector<int>m_score;
};