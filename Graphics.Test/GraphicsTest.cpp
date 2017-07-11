#include "stdafx.hpp"
#include "CppUnitTest.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MyNameSpace 
{
	TEST_CLASS(MyClass)
	{
	public:
		TEST_METHOD(MyMethod)
		{
			throw 0;
		}
	};
}