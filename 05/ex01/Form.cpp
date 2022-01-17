#include "Form.hpp"

Form::Form(void) : _name(""), _isSigned(0), _gradeToSign(1), _gradeToExec(1)
{
}

Form::~Form(void)
{
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form &)
{
    return (*this);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return ("GradeTooHighException");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return ("GradeTooLowException");
}

const char *Form::FormAlreadySignedException::what(void) const throw()
{
    return ("FormAlreadySignedException");
}

void Form::beSigned(Bureaucrat signer)
{
    if (this->_isSigned)
        throw Form::FormAlreadySignedException();
    else if (signer.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    else
        this->_isSigned = 1;
}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getIsSigned(void) const
{
    return (this->_isSigned);
}

int Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExec(void) const
{
    return (this->_gradeToExec);
}

std::ostream& operator<<(std::ostream &os, const Form &obj)
{
    os << obj.getName() << ", grade to sign: " << obj.getGradeToSign() << ", grade to exec: " << obj.getGradeToExec() << ". Signed?: " << obj.getIsSigned();
    return (os);
}
