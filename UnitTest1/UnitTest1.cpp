#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.2/LR5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(sum > 0);
		}
	};
}
