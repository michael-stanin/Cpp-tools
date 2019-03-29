#include <iostream>

void foo(int* p)
{
    
}

void DereferenceBeforeCheck(int* p)
{
    int x = *p;
    std::cout << x;
    if (p)
        foo(p);
}

int main()
{
    std::cout << "Helloo world";
    char* p;
    *p = 0;

    // int* p = nullptr;
    // DereferenceBeforeCheck(p);

    return 0;
}