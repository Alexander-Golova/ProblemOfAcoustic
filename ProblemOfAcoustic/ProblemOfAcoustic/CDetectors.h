#pragma once
#include "BasicDataProblem.h"

class CDetectors
{
public:
	CDetectors();
	~CDetectors();

private:
	std::array<std::array<float, N>, N> m_fields;
};

