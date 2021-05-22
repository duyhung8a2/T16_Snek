#pragma once
#include "Graphics.h"
#include "Location.h"

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(const Location& loc, Color c);
	int getGridHeight() const;
	int getGridWidth() const;
	bool IsInsideBoard(const Location& loc) const;
private:
	static constexpr int dimention = 20;
	static constexpr int width = 40;
	static constexpr int height = 30;
	Graphics& gfx;

};