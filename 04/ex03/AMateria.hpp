#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria(void);
        virtual ~AMateria(void);
        AMateria(const std::string &type);

        AMateria &operator=(const AMateria &other);

        const std::string &getType(void) const; //Returns the materia type
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter &target);
    protected:
        std::string _type;
};
