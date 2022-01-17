#pragma once
#include <set>
#include <iostream>
#include <iterator>
#include <algorithm>

class Span
{
    public:
        Span(unsigned int n);
        ~Span(void);
        Span(const Span &other);

        Span &operator=(const Span &other);

        void addNumber(int n);
        template<typename T>
        void addNumber(T begin, T end)
        {
            if (this->_mset.size() + std::distance(begin, end) > this->_n)
                throw SpanAlreadyFullException();
            else
                this->_mset.insert(begin, end);
        }

        int shortestSpan(void);
        int longestSpan(void);
        class SpanAlreadyFullException : public std::exception
        {
            public:
                virtual const char *what(void) const throw();
        };
        class NotEnoughNumbersException : public std::exception
        {
            public:
                virtual const char *what(void) const throw();
        };
    private:
        Span(void);
        unsigned int _n;
        std::multiset<int> _mset;
};
