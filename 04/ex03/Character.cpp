#include "Character.hpp"

Character::Character(void) : _name("")
{
    for (size_t i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character(const Character &other)
{
    for (size_t i = 0; i < 4; i++)
    {
        this->_name = other._name;
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = 0;
    }
}

Character::Character(std::string name) : _name(name)
{
    for (size_t i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        for (size_t i = 0; i < 4; i++)
        {
            this->_name = other._name;
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
            else
                this->_inventory[i] = 0;
        }
    }
    return (*this);
}

Character::~Character(void)
{
    for (size_t i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
}

const std::string &Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    int idx = 0;

    while (idx < 4 && this->_inventory[idx])
        idx++;
    if (idx == 4 || !m)
        return ;
    this->_inventory[idx] = m->clone();
}

void Character::unequip(int idx)
{
    if (this->_inventory[idx])
        delete this->_inventory[idx];
    this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 4 && this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
    }
}
