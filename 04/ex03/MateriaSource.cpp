#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (size_t i = 0; i < 4; i++)
        this->_learned[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (other._learned[i])
            this->_learned[i] = other._learned[i]->clone();
        else
            this->_learned[i] = 0;
    }
}

MateriaSource::~MateriaSource(void)
{
    for (size_t i = 0; i < 4; i++)
        if (this->_learned[i])
            delete this->_learned[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (size_t i = 0; i < 4; i++)
        {
            if (other._learned[i])
                this->_learned[i] = other._learned[i]->clone();
            else
                this->_learned[i] = 0;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    int idx = 0;
    while (idx < 4 && this->_learned[idx])
        idx++;
    if (idx == 4 || !m)
        return ;
    this->_learned[idx] = m->clone();
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_learned[i] && this->_learned[i]->getType() == type)
            return this->_learned[i]->clone();
    }
    return (0);
}
