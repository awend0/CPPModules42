#pragma once
#include <iostream>
#include <sstream>
#define SSTR( x ) static_cast< std::ostringstream & >(( std::ostringstream() << std::dec << x ) ).str()

class Brain
{
    public:
        Brain(void);
        Brain(const Brain &other);
        ~Brain(void);

        Brain &operator=(const Brain &other);
    private:
        std::string _ideas[100];

};
