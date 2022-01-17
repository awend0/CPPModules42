#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        const Animal* animals[10];

        std::cout << "CREATING 5 DOGS AND 5 CATS" << std::endl << std::endl;
        for (size_t i = 0; i < 10; i++)
        {
            if (i % 2 ^ 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
            std::cout << "-" << std::endl;
        }

        std::cout << std::endl << "NOW THEY GONNA DIE" << std::endl << std::endl;
        for (size_t i = 0; i < 10; i++)
        {
            delete animals[i];
            std::cout << "~" << std::endl;
        }
    }
    std::cout << std::endl << " = = = = = = = = = " << std::endl << std::endl;
    {
        Cat cat;
        Cat copycat(cat);
        copycat.makeSound();
    }
}
