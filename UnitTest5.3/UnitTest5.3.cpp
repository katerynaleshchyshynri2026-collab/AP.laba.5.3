#include "pch.h"
#include "CppUnitTest.h"
#include "../AP.laba.5.3/AP.Laba.5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(t(0), 0.0);
		}

		TEST_METHOD(TestMethod2)
		{
			double expected = (cos(1.0) + 1) / (exp(1.0) + sin(1.0) * sin(1.0));
			Assert::AreEqual(t(1), expected, 1e-9);
		}

	};
}
