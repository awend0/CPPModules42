#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(void);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm(std::string _target);

        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

        void execute(const Bureaucrat &executor) const;
    private:
        const std::string _target;    
};
