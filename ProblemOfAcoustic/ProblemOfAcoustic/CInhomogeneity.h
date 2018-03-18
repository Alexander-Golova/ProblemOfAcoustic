#pragma once
#include "BasicDataProblem.h"
#include "stdafx.h"

class CInhomogeneity
{
public:
	CInhomogeneity();
	~CInhomogeneity();

	void SetCoordinate(Point node);
	Point GetCoordinate() const;
	void SetRefractionIndex();
	void WriteRefractionIndex();

private:
	Point m_coordinate;
	Point m_step;
	std::array<std::array<std::array<float, N>, N>, N > m_refractionIndex;
};

