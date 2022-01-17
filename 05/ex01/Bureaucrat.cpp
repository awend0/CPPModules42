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
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        this->_grade = 150;
        throw GradeTooLowException();
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

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
    }
    catch (Form::GradeTooLowException)
    {
        std::cout << this->_name << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
        return;
    }
    catch (Form::FormAlreadySignedException)
    {
        std::cout << this->_name << " cannot sign " << form.getName() << " because form is already signed" << std::endl;
        return;
    }
    catch (std::exception e)
    {
        std::cout << e.what();
        return;
    }
    std::cout << this->_name << " signs " << form.getName() << std::endl;
}

void Bureaucrat::incGrade(int value)
{
    int res = this->_grade - value;
    if (res < 1)
    {
        throw GradeTooHighException();
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
        throw GradeTooLowException();
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
