#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3D\Lab_oop_3.3D\TrianglePublic.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3D\Lab_oop_3.3D\TrianglePrivate.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3D\Lab_oop_3.3D\Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP33D
{
	TEST_CLASS(UTOOP33D)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			TrianglePrivate T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}
	};
}