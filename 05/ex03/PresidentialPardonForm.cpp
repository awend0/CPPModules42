#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("")
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardonForm", 25, 5), _target(other._target)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}
