#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &other);
        ~MateriaSource(void);

        MateriaSource &operator=(const MateriaSource &other);

        void learnMateria(AMateria *m);
        AMateria *createMateria(const std::string &type);
    private:
        AMateria *_learned[4];
};
