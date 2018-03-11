#include "stdafx.h"

#include "../ProblemOfAcoustic/CSourses.h"
#include <functional>

using namespace std;
using namespace std::placeholders;

struct SoursesFixture
{
	CSourses sourse;

	void ExpectFailure(std::function<bool(CSourses & sourse)> const& action)
	{
		auto clone(sourse);
		BOOST_CHECK(!action(clone));
	}
};

// источник
BOOST_FIXTURE_TEST_SUITE(Sourses, SoursesFixture)
	// по умолчанию
	BOOST_AUTO_TEST_SUITE(by_default)
		// изначально с 0 количеством источников
		BOOST_AUTO_TEST_CASE(has_zero_sources)
		{
			BOOST_CHECK_EQUAL(sourse.GetNumber(), 0);
		}
		// не имеет координат
		BOOST_AUTO_TEST_CASE(does_not_have_coordinates)
		{
			BOOST_CHECK(sourse.GetSourceCoordinates().empty());
		}

		// можно задать один источник
		BOOST_AUTO_TEST_CASE(can_specify_one_source_at_a_source)
		{
			sourse.SetSourceCoordinates({ 4.0f, 5.0f });
			BOOST_CHECK_EQUAL(sourse.GetNumber(), 1);
			//const vector<Point> vec = { { 4.0f, 5.0f } };
			//BOOST_CHECK_EQUAL(sourse.GetSourceCoordinates(), vec);
		}

		// можно задать два источника
		BOOST_AUTO_TEST_CASE(can_specify_two_sources_at_the_source)
		{
			sourse.SetSourceCoordinates({ 4.0f, 5.0f });
			sourse.SetSourceCoordinates({ 1.0f, 2.0f });
			BOOST_CHECK_EQUAL(sourse.GetNumber(), 2);
		}
		// нельзя задать источники с одинаковыми координатами TODO


	BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()
