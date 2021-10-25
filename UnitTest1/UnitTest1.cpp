#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double R;
			double x = 1;
			double j = 10;

			R = (sin(10. * x) + cos(10. / j)) / sqrt(x);
			Assert::AreEqual(R, sin(10) + cos(1));
		}
	};
}