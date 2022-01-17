#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(const Character &other);
        Character(std::string _name);
        ~Character(void);

        Character &operator=(const Character &other);

        std::string const &getName(void) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
    private:
        std::string _name;
        AMateria *_inventory[4];
};
