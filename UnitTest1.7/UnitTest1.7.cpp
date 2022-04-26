#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab(1.7)/Payment.h"
#include "C:\Users\Maria\source\repos\Lab(1.7)\Lab(1.7)\Payment.cpp"
#include "C:\Users\Maria\source\repos\Lab(1.7)\Lab(1.7)\Money.cpp"
#include "C:\Users\Maria\source\repos\Lab(1.7)\Lab(1.7)\Money.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest17
{
	TEST_CLASS(UnitTest17)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment g;
			g.Init(20000, 24, 10, 24, 2025);
			int test = g.³nterestt();
			Assert::AreEqual(22000, test);

		}
	};
}
