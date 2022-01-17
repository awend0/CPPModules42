#include "mutantstack.hpp"
#include <iostream>

int main()
{
    std::cout << "Basic MutantStack test:" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Default iterators test:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "Reverse iterators test:" << std::endl;
    MutantStack<int>::reverse_iterator itr = mstack.rbegin();
    MutantStack<int>::reverse_iterator itre = mstack.rend();
    ++itr;
    --itr;
    while (itr != itre)
    {
        std::cout << *itr << std::endl;
        ++itr;
    }

    std::cout << "Const iterators test:" << std::endl;
    MutantStack<int>::const_iterator itc = mstack.begin();
    MutantStack<int>::const_iterator itce = mstack.end();
    ++itc;
    --itc;
    while (itc != itce)
    {
        std::cout << *itc << std::endl;
        ++itc;
    }

    std::cout << "Const reverse iterators test:" << std::endl;
    MutantStack<int>::const_reverse_iterator itcr = mstack.rbegin();
    MutantStack<int>::const_reverse_iterator itcre = mstack.rend();
    ++itcr;
    --itcr;
    while (itcr != itcre)
    {
        std::cout << *itcr << std::endl;
        ++itcr;
    }

    std::cout << "Let's see what's in std::stack<int>(MutantStack)" << std::endl;
    std::stack<int> st(mstack);
    while (!st.empty())
    {
        std::cout << st.top() << std::endl;
        st.pop();
    }
    std::cout << "std::stack<int>(MutantStack).size():" << std::endl;
    std::cout << st.size() << std::endl;
}
