#pragma once
#include <iostream>

template<typename T>
class Array
{
    public:
        Array(void) : _arr(0), _size(0) {}
        Array(unsigned int n) : _arr(new T[n]()), _size(n) {};
        Array(const Array &other)  : _arr(0), _size(0) { *this = other; }
        ~Array(void) { if (this->_size > 0) delete[] this->_arr; }

        Array &operator=(const Array &other)
        {
            if (this->_size > 0)
                    delete[] this->_arr;
            this->_arr = (other._size > 0 ? new T[other._size]() : 0);
            if (this != &other && other._size > 0)
            {
                for (unsigned int i = 0; i < other._size; i++)
                    this->_arr[i] = other._arr[i];
            }
            this->_size = other._size;
            return (*this);
        };
        T &operator[](unsigned int idx) const
        {
            if (idx < 0 || idx >= this->_size)
                throw Array::ArrayOutOfBoundsException();
            else
                return (this->_arr[idx]);
        }
        unsigned int size(void) { return (this->_size); }

        class ArrayOutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("ArrayOutOFBoundsException");
                }
        };
    private:
        T *_arr;
        unsigned int _size;
};
