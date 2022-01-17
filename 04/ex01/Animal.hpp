#pragma once
#include "Brain.hpp"

class Animal
{
    public:
        Animal(void);
        Animal(const std::string type);
        Animal(const Animal &other);
        virtual ~Animal(void);

        Animal &operator=(const Animal &other);

        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string _type;
};
