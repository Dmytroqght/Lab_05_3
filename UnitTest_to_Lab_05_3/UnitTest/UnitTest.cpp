#include "pch.h"
#include "CppUnitTest.h"
#include "C:\\Student\\Lab_05_3\\Lab_05_3.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab053Test
{
    TEST_CLASS(Lab053Test)
    {
    public:

        TEST_METHOD(Test_f_AbsMoreEqualOne)
        {
            double x = 2.0;
            double expected = (sin(2 * x) + 1) / (sin(x) + pow(cos(x), 2));
            Assert::AreEqual(expected, f(x), 1e-6);
        }

        TEST_METHOD(Test_f_AbsLessOne)
        {
            double x = 0.5;

            
            double S = 4;
            double R = 4;
            int j = 0;
            while (j < 7)
            {
                j++;
                R = pow(x, 4) / ((2 * j + 1) * 2 * j);
                S += R;
            }

            Assert::AreEqual(S, f(x), 1e-6);
        }
    };
}
