#pragma once
#include "Board.h"

class SnakeSegment
{

};

class Snake
{
private:
	class Segment
	{
	private:
		Location loc;
		Color c;
	public:
		void InitHead(const Location& loc);
		void InitBody();
		void Follow(const Segment& next);
		void MoveBy(const Location& delta_loc);
		void Draw(Board& brd);
		const Location& GetLocation() const;
	};
public:
	Snake(const Location& loc);
	void MoveBy(const Location& delta_loc);
	void Grow();
	void Draw(Board& brd);
	Location GetNextHeadLocation(const Location& delta_loc) const;
	bool IsInTileExceptEnd(const Location& target) const;
	bool IsInTile(const Location& target) const;
private:
	static constexpr Color headColor = Colors::Cyan;
	static constexpr Color bodyColor = Colors::White;
	static constexpr int nSegmentMax = 100;
	Segment segments[ nSegmentMax ];
	int nSegments = 1;
};