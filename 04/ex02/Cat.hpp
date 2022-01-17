#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &other);
        ~Cat(void);

        Cat &operator=(const Cat &other);

        void makeSound(void) const;
    private:
        Brain *_brain;
};
