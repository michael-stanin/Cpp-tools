#include <iostream>
#include <list>
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

// namespace DeadCode
// {
//     int func(int a)
//     {
//         int b = a*2;
//         return b;

//         // Unreachable code
//         if (b < 10) {
//             b += 10;
//         }
//         return b;
//     }

//     void test()
//     {
//         func(42);

//         vector<string> vec;
//         while (true) {
//             vec.push_back("abc");

//             if (vec.size() > 25) {
//                 return;
//             }
//         }

//         // Unreachable code
//         vec.pop_back();
//     }
// }

namespace OutOfBoundsReadsWrites
{
    void test()
    {
        int arr[] = {1,2,3,4,5}; 
        cout << "arr [0] is " << arr[0] << endl; 
      
        // arr[10] is out of bound 
        cout << "arr [10] is " << arr[10] << endl; 

        // allocation memory to out of bound  
        // element 
        arr[10] = 11; 
        cout << "arr[10] is " << arr[10] << endl; 
    }
}

int main()
{
    //std::cout << "Hello World";
    //DivisionByZero::test();
    //NullPointerDereference::test();
    //MemoryLeaks::test();
    //DeadCode::test();
    OutOfBoundsReadsWrites::test();
    return 0;
}
