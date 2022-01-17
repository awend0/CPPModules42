#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
    {
        this->_grade = 1;
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        this->_grade = 150;
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &)
{
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("GradeTooLowException");
}

void Bureaucrat::incGrade(int value)
{
    int res = this->_grade - value;
    if (res < 1)
    {
        throw Bureaucrat::GradeTooHighException();
        this->_grade = 1;
    }
    else
        this->_grade = res;    
}

void Bureaucrat::decGrade(int value)
{
    int res = this->_grade + value;
    if (res > 150)
    {
        throw Bureaucrat::GradeTooLowException();
        this->_grade = 150;
    }
    else
        this->_grade = res;  
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}
