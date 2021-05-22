#include "Board.h"
#include "Location.h"
#include <assert.h>

Board::Board(Graphics& gfx)
	: gfx( gfx )
{

}

void Board::DrawCell( const Location& loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x <= Graphics::ScreenWidth);
	assert(loc.y >= 0);
	assert(loc.y <= Graphics::ScreenHeight);
	gfx.DrawRectDim(loc.x * dimention, loc.y * dimention, dimention, dimention, c);
}

int Board::getGridHeight() const
{
	return height;
}

int Board::getGridWidth() const
{
	return width;
}

bool Board::IsInsideBoard(const Location& loc) const
{
	return loc.x >= 0 && loc.x < width && loc.y >= 0 && loc.y < height;
}
