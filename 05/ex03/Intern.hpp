#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern &other);

        Intern &operator=(const Intern &other);

        Form *makeForm(std::string type, std::string target);
};
