#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 0;
			int const n = 3;
			int a[n] = { 2,5,1 };
			Sort(a, n,i);
			int t = a[2];
			Assert::AreEqual(t, 1);
		}
	};
}
