#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Vitaly\source\repos\ConsoleApplication13\ConsoleApplication13\ConsoleApplication13.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LABA3
{
	TEST_CLASS(LABA3)
	{
	public:
		// Passed
		TEST_METHOD(calculate_n3_x8_get12)
		{
			int x = 8;
			int n = 3;
			int expected = 12;
			int received = calculate(n, x);
			Assert::AreEqual(expected, received);
		}
		
	public:
		// Passed
		TEST_METHOD(calculate_n3_x_minus8_get12)
		{
			int x = -3;
			int n = 2;
			int expected = -5;
			int received = calculate(n, x);
			Assert::AreEqual(expected, received);
		}
		
	public:
		// Unpassed
		TEST_METHOD(calculate_n2_x_minus3_getERROR)
		{
			int x = -3;
			int n = 2;
			int expected = -342234;
			int received = calculate(n, x);
			Assert::AreEqual(expected, received);
		}
		
	public:
		// Об'єкти не рівні
		// Passed
		TEST_METHOD(calculate_n3_x8_get1234_butAssert_notEqual)
		{
			int x = 8;
			int n = 3;
			int expected = 1234;
			int received = calculate(n, x);
			Assert::AreNotEqual(expected, received);
		}
		
	public:
		// Unpassed
		TEST_METHOD(calculate_n3_x_minus4_getERROR)
		{
			int x = -4;
			int n = 2;
			int expected = -5;
			int received = calculate(n, x);
			Assert::AreEqual(expected, received);
		}
		
	public:
		// Перевірка об'єктів на посилання на інші об'єкти
		// Passed
		TEST_METHOD(calculate_n3_x_minus4_testAreNotSame)
		{
			int x = -4;
			int n = 2;
			int expected = -5;
			int received = calculate(n, x);
			Assert::AreNotSame(expected, received);
		}
	public:
		// Passed
		TEST_METHOD(checkValidParams_get3_exceptionNoThrown)
		{
			int n = 3;
			try
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:
		// Passed
		TEST_METHOD(checkValidParams_getMinus2_exception_getThrown)
		{
			int n = -2;
			try
			{
				checkValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	public:
		// Passed
		TEST_METHOD(checkValidParams_getMinus2_exception_getTrown)
		{
			int n = 10;
			try
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	
	};
}
