#pragma once
#include <iostream>
#include <iomanip>
#include <climits>
#include <stdlib.h>
#include <math.h>

class Caster
{
    public:
        Caster(void);
        ~Caster(void);
        Caster(std::string _str);
        Caster(const Caster &other);

        Caster &operator=(const Caster &other);

        void printResult(void);
    private:
        void toChar(void) const;
        void toInt(void) const;
        void toFloat(void) const;
        void toDouble(void) const;

        std::string _str;
        double _num;
        bool _impossible;
};

std::ostream &operator<<(std::ostream &os, const Caster &obj);
