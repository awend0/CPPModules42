#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base *generate(void)
{
    int randVal = std::rand() % 3;
    switch (randVal)
    {
    case 0:
        std::cout << "A generated" << std::endl;
        return new A();  
    case 1:
        std::cout << "B generated" << std::endl;
        return new B();
    case 2:
        std::cout << "C generated" << std::endl;
        return new C();
    }
    return (0);
}

void identify(Base *p)
{
    A *aPtr = dynamic_cast<A *>(p);
    if (aPtr != 0)
    {
        std::cout << "A identified" << std::endl;
        return;
    }

    B *bPtr = dynamic_cast<B *>(p);
    if (bPtr != 0)
    {
        std::cout << "B identified" << std::endl;
        return;
    }

    C *cPtr = dynamic_cast<C *>(p);
    if (cPtr != 0)
    {
        std::cout << "C identified" << std::endl;
        return;
    }
}

void identify(Base &p)
{
    try
    {
        A &ref = dynamic_cast<A &>(p);
        std::cout << "A identified" << std::endl;
        return;
    }
    catch (std::exception e)
    {
    }

    try
    {
        B &ref = dynamic_cast<B &>(p);
        std::cout << "B identified" << std::endl;
        return;
    }
    catch (std::exception e)
    {
    }

    try
    {
        C &ref = dynamic_cast<C &>(p);
        std::cout << "C identified" << std::endl;
        return;
    }
    catch (std::exception e)
    {
    }
}

int main(void)
{
    std::srand(time(0));
    Base *testPtr = generate();
    identify(testPtr);
    Base &testRef = *testPtr;
    identify(testRef); 
}