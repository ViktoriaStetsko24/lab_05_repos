// This is the main DLL file.

#include "stdafx.h"

#include "TestUnit1.h"

#include "../PR.5.1/pr.5.1.cpp"

using namespace Microsoft::VisualStudio::TestUnit1Framework;

namespace TestUnit1
{
	TEST_CLASS(TestUnit1)
	{
	public:
		TEST_METHOD(TestMethodl)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqal(t, 5);
		}
	}
}
