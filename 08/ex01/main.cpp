#include "span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

int main()
{
    std::srand(std::time(0));

    std::cout << "basic test:" << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl << "exceptions test: " << std::endl;
    try
    {
        sp.addNumber(123);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Span sp1 = Span(1);
    sp1.addNumber(100);
    try
    {
        std::cout << sp1.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "15000 test: " << std::endl;
    Span bigspan(15000);
    for (int i = 0 ; i < 15000; i++)
        bigspan.addNumber(std::rand() % 15000);
    std::cout << "Shortest span: " << bigspan.shortestSpan() << std::endl << "Longest span: " << bigspan.longestSpan() << std::endl;

    std::cout << std::endl << "addNumber by iterators test" << std::endl;
    std::vector<int> _vec;
    for (int i = 0; i < 1000; i++)
        _vec.push_back(std::rand() % 1000);
    Span sp2(500);
    try
    {
        sp2.addNumber(_vec.begin(), _vec.end());
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Span sp3(1000);
    sp3.addNumber(_vec.begin(), _vec.end());
    std::cout << sp3.shortestSpan() << std::endl << sp3.longestSpan() << std::endl;
}
