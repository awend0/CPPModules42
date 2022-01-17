#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("")
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequestForm", 72, 45), _target(other._target)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << "DrrrrrrDrrrrrrDrrrDrr..." << std::endl;
    std::srand(time(0));
    if (std::rand() % 2 ^ 0)
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << this->_target << " wasn't robotomized :(" << std::endl; 
}
