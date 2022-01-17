#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(const Intern &)
{
}

Intern &Intern::operator=(const Intern &)
{
    return (*this);
}

static Form *createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

static Form *createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

static Form *createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

static Form *createEmptyForm(std::string)
{
    std::cout << "* Intern said there is no such type of form, isn't he wrong? *" << std::endl;
    return (0);
}


Form *Intern::makeForm(std::string type, std::string target)
{
    const static std::string types[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    static Form* (*formCreators[])(std::string) = {createPresidentialPardonForm, createRobotomyRequestForm, createShrubberyCreationForm, createEmptyForm};

    int idx = 0;
    while (idx < 3 && types[idx] != type)
        idx++;
    return (*formCreators[idx])(target);
}
