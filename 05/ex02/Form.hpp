#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(void);
        ~Form(void);
        Form(const Form &other);
        Form(std::string name, int gradeToSign, int gradeToExec);

        Form &operator=(const Form &other);

        class GradeTooLowException : public std::exception
        {
            virtual const char *what(void) const throw();
        };
        class GradeTooHighException : public std::exception
        {
            virtual const char *what(void) const throw();
        };
        class FormNotSignedException : public std::exception
        {
            virtual const char *what(void) const throw();
        };
        class FormAlreadySignedException : public std::exception
        {
            virtual const char *what(void) const throw();
        };

        void beSigned(Bureaucrat signer);
        std::string getName(void) const;
        bool getIsSigned(void) const;
        int getGradeToSign(void) const;
        int getGradeToExec(void) const;
        virtual void execute(const Bureaucrat &executor) const = 0;
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExec;
};

std::ostream& operator<<(std::ostream &os, const Form &obj);
