#include "Caster.hpp"

Caster::Caster(void) : _str("42")
{
}

Caster::~Caster(void)
{
}

Caster::Caster(const Caster &other)
{
    *this = other;
}

Caster::Caster(std::string str) : _str(str)
{
    errno = 0;
    char *e;
    this->_num = std::strtod(str.c_str(), &e);
    if (*e ^ '\0' && errno != 0)
        this->_impossible = 1;
    if (this->_num == 0 && !(str == "0" || str.substr(0, 3) == "0.0" || str == "-0" || str.substr(0, 4) == "-0.0"))
        this->_impossible = 1;
    else
        this->_impossible = 0;
}

Caster &Caster::operator=(const Caster &other)
{
    this->_str = other._str;
    this->_num = other._num;
    this->_impossible = other._impossible;
    return (*this);
}


void Caster::toChar(void) const
{
    std::cout << "char: ";
    char castedChar = static_cast<char>(this->_num);
    if (isnan(this->_num) || isinf(this->_num) || this->_impossible)
        std::cout << "impossible" << std::endl;
    else if (castedChar < 32 || castedChar > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << '\'' << castedChar << '\'' << std::endl;
}

void Caster::toInt(void) const
{
    std::cout << "int: ";
    if (isnan(this->_num) || this->_num > INT_MAX || this->_num < INT_MIN || this->_impossible)
        std::cout << " impossible" << std::endl;
    else
        std::cout << static_cast<int>(this->_num) << std::endl;
}

void Caster::toFloat(void) const
{
    std::cout << "float: ";
    if (this->_impossible || this->_num > __FLT_MAX__ || this->_num < __FLT_MIN__)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(this->_num) << "f" << std::endl;
}

void Caster::toDouble(void) const
{
    std::cout << "double: ";
    if (this->_impossible)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << this->_num << std::endl;
}

void Caster::printResult(void)
{
    this->toChar();
    this->toInt();
    this->toFloat();
    this->toDouble();
}
