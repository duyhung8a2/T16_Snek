#pragma once

class Location
{
public:
	void Add(const Location& delta_loc)
	{
		this->x += delta_loc.x;
		this->y += delta_loc.y;
	}
	bool operator== (const Location& other) const
	{
		return x == other.x && y == other.y;
	}
	int x;
	int y;
};