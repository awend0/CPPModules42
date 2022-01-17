#pragma once
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(void);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm(std::string _target);

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

        void execute(const Bureaucrat &executor) const;
    private:
        const std::string _target;    
};
