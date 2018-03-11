#pragma once

const std::complex<float> I = { 0.0f, 1.0f };

struct Point
{
	float x;
	float y;
};

/*
const bool operator == (const Point& lhs, const Point& rhs)
{
	if ((lhs.x == rhs.x) && (lhs.y == rhs.y))
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/