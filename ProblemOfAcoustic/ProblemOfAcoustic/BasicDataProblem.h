#pragma once

const std::complex<float> I = { 0.0f, 1.0f };

const size_t NUMBER_PARTITION_POINTS = 10;

const float inverseN = 1.0f / NUMBER_PARTITION_POINTS;

const size_t N = NUMBER_PARTITION_POINTS + 1;

const float c_0 = 1.0f; // TODO

const float omega = 1.0f; // TODO

const float FOUR_PI = 12.566370614359f; // TODO

struct Point
{
	float x;
	float y;
	float z;
};

/*
const bool operator == (const Point& lhs, const Point& rhs)
{
	if ((lhs.x == rhs.x) && (lhs.y == rhs.y) && (lhs.z == rhs.z))
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/
