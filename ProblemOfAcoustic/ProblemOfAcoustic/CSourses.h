#pragma once
#include "BasicDataProblem.h"

class CSourses
{
public:
	CSourses();
	~CSourses();
	int GetNumber() const;
	
	void SetSourceCoordinates(Point node);
	std::vector<Point> GetSourceCoordinates() const;
	std::complex<float> Function(const Point source, const Point point) const;

private:
	int m_number = 0;
	std::vector<Point> m_sourceCoordinates;
};

