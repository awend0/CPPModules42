#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
    std::srand(time(0));

    std::vector<int> _vector;
    for (int i = 0; i < 10; i++)
        _vector.push_back(rand() % 10);
    std::vector<int>::iterator itVec = easyfind(_vector, 4);
    if (itVec != _vector.end())
        std::cout << *itVec << std::endl;
    else
        std::cout << "Probably there is no 4 in vec" << std::endl;

    std::list<int> _list;
    for (int i = 0; i < 10; i++)
        _list.push_back(rand() % 10);
    std::list<int>::iterator itLst = easyfind(_list, 2);
    if (itLst != _list.end())
        std::cout << *itLst << std::endl;
    else
        std::cout << "Probably there is no 2 in list" << std::endl;
}
