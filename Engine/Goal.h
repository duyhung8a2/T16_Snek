#pragma once
#include "Board.h"
#include "Snake.h"
#include <random>

class Goal
{
private:
	Location loc;
	Color c = Colors::Red;
public:
	Goal(std::mt19937& rng, const Board& brd, const Snake& snake);
	void Respawn(std::mt19937& rng, const Board& brd, const Snake& snake);
	void Draw(Board& brd);
	const Location& GetLocation();
};