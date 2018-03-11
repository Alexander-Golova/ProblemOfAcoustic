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
