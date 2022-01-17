#pragma once
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(void);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm(std::string _target);

        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        void execute(const Bureaucrat &executor) const;
    private:
        const std::string _target;    
};
