#include "iter.hpp"
#include <iostream>

template<typename T>
void foo(const T &a)
{
    std::cout << a << std::endl;
    return;
}

int main(void)
{
    int intArr[] = {0, 1, 2, 3, 4, 5};
    float floatArr[] = {6.5, 7.5, 8.5, 9.5, 10.5, 11.5};
    std::string strArr[] = {"Hello", ",", "my", "name", "is", "mraymun!"};

    ::iter(intArr, 6, &foo);
    std::cout << std::endl;
    ::iter(floatArr, 6, &foo);
    std::cout << std::endl;
    ::iter(strArr, 6, &foo);
}
