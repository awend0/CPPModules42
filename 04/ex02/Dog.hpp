#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &other);
        ~Dog(void);

        Dog &operator=(const Dog &other);

        void makeSound(void) const;
    private:
        Brain *_brain;
};
