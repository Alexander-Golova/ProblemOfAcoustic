#include "stdafx.h"
#include "CInhomogeneity.h"


CInhomogeneity::CInhomogeneity()
{
}


CInhomogeneity::~CInhomogeneity()
{
}

void CInhomogeneity::SetCoordinate(Point node)
{
	m_coordinate = node;
	m_step = { node.x * inverseN, node.y * inverseN, node.z * inverseN };
}

Point CInhomogeneity::GetCoordinate() const
{
	return m_coordinate;
}

void CInhomogeneity::SetRefractionIndex()
{
	float sigma = 16.0f;
	for (size_t i = 0; i <= N; ++i)
	{
		for (size_t j = 0; j <= N; ++j)
		{
			for (size_t k = 0; k <= N; ++k)
			{
				m_refractionIndex[i][j][k] = 0.4f * exp(-((i * m_step.x - 0.6f) * (i * m_step.x - 0.6f) +
					(j * m_step.y - 0.6f) * (j * m_step.y - 0.6f) + (k * m_step.z - 0.6f) * (k * m_step.z - 0.6f)) * sigma);
			}
		}
	}
}
