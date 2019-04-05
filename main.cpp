#include <iostream>

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

namespace MemoryLeaks
{
    struct A{
        char* member;
        A() :member(new char[42]){}
    };

    void test()
    {
        A a;
        int* pi = new int;
        //*pi = 5;
        return;
    }
}

int main()
{
    //std::cout << "Hello World";
    //DivisionByZero::test();
    //NullPointerDereference::test();
    MemoryLeaks::test();
    return 0;
}
