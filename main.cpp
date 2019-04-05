#include <iostream>
#include <vector>

using namespace std;

// namespace DivisionByZero
// {
//     //clang-tidy --checks=* main.cpp

//     int division(int a, int b)
//     {
//         if ( b == 0 ) {
//             throw "Division by zero condition!";
//         }
//         return a/b;
//     }

//     void test()
//     {
//         int x{10};
//         int y{0};
//         int z;

//         try {
//             z = division(x,y);
//             cout << "The answer is " << z << endl;
//         }
//         catch (const char* msg) {
//             cerr << "Caught an exception!" << endl;
//             cerr << msg << endl;
//         }
//     }
// }

// namespace NullPointerDereference
// {
//     void test()
//     {
//         int* pi;
//         cout << *pi << endl;

//         int* otherPi = nullptr;
//         cout << *otherPi << endl;
//     }
// }

// namespace MemoryLeaks
// {
//     struct A{
//         char* member;
//         A() :member(new char[42]){}
//     };

//     void test()
//     {
//         A a;
//         int* pi = new int;
//         //*pi = 5;
//         return;
//     }
// }

namespace DeadCode
{
    int func(int a)
    {
        int b = a*2;
        return b;

        // Unreachable code
        if (b < 10) {
            b += 10;
        }
        return b;
    }

    void test()
    {
        func(42);

        vector<string> vec;
        while (true) {
            vec.push_back("abc");

            if (vec.size() > 25) {
                return;
            }
        }

        // Unreachable code
        vec.pop_back();
    }
}

int main()
{
    //std::cout << "Hello World";
    //DivisionByZero::test();
    //NullPointerDereference::test();
    //MemoryLeaks::test();
    DeadCode::test();
    return 0;
}
