#include "Karen.hpp"

Karen::Karen()
{
    this->_messages[0] = "DEBUG";
    this->_messages[1] = "INFO";
    this->_messages[2] = "WARNING";
    this->_messages[3] = "ERROR";
    this->_functions[0] = &Karen::debug;
    this->_functions[1] = &Karen::info;
    this->_functions[2] = &Karen::warning;
    this->_functions[3] = &Karen::error;
}

Karen::~Karen()
{
}

void Karen::debug()
{
    std::cout   << "[ DEBUG ]" << std::endl
                << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
                << "I just love it!" << std::endl << std::endl;
}

void Karen::info()
{
    std::cout   << "[ INFO ]" << std::endl
                << "I cannot believe adding extra bacon cost more money." << std::endl
                << "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning()
{
    std::cout   << "[ WARNING ]" << std::endl
                << "I think I deserve to have some extra bacon for free." << std::endl
                << "I’ve been coming here for years an you just started working here last month." << std::endl << std::endl;
}

void Karen::error()
{
    std::cout   << "[ ERROR ]" << std::endl
                << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void Karen::complain(std::string level)
{
    int tocall = 0;

    while (this->_messages[tocall] != level && tocall != 4)
        tocall++;
    switch (tocall)
    {
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        case 0:
            (this->*_functions[0])();
        case 1:
            (this->*_functions[1])();
        case 2:
            (this->*_functions[2])();
        case 3:
            (this->*_functions[3])();
    }
}