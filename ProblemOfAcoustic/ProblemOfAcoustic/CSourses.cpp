#include "stdafx.h"
#include "CSourses.h"

using namespace std;

CSourses::CSourses()
{
}

CSourses::~CSourses()
{
}

int CSourses::GetNumber() const
{
	return m_number;
}

void CSourses::SetSourceCoordinates(Point node)
{
	m_sourceCoordinates.push_back(node);
	++m_number;
//	return true;
}

std::vector<Point> CSourses::GetSourceCoordinates() const
{
	return m_sourceCoordinates;
}

std::complex<float> CSourses::Function(const Point source, const Point point) const
{
	float dist = sqrt(pow(point.x - source.x, 2) + pow(point.y - source.y, 2) + pow(point.z - source.z, 2));
	return -exp(I * omega * dist / c_0) / (FOUR_PI * dist);
}
