#include "span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::~Span(void) {}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    this->_n = other._n;
    this->_mset = other._mset;   
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->_mset.size() + 1 > this->_n)
        throw SpanAlreadyFullException();
    else
        this->_mset.insert(n);
}

int Span::shortestSpan(void)
{
    if (this->_mset.size() <= 1)
        throw NotEnoughNumbersException();
    int ret = __INT_MAX__;
    std::multiset<int>::iterator ite = this->_mset.end();
    for (std::multiset<int>::iterator it = this->_mset.begin(); it != ite; it++)
    {
        std::multiset<int>::iterator next = it; std::advance(next, 1);
        if (next != ite)
        {
            int tmp = abs(*it - *next);
            if (tmp < ret)
                ret = tmp;
        }
    }
    return (ret);
}

int Span::longestSpan(void)
{
    if (this->_mset.size() <= 1)
        throw NotEnoughNumbersException();
    return (abs(*std::max_element(this->_mset.begin(), this->_mset.end()) - *std::min_element(this->_mset.begin(), this->_mset.end())));
}

const char *Span::SpanAlreadyFullException::what(void) const throw()
{
    return ("SpanAlreadyFullException");
}

const char *Span::NotEnoughNumbersException::what(void) const throw()
{
    return ("NotEnoughNumbersException");
}

Span::Span(void) {}
