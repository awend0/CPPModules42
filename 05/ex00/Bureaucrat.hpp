#pragma once
#include <iostream>

class Bureaucrat
{
    public:
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);

        Bureaucrat &operator=(const Bureaucrat &other);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what(void) const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what(void) const throw();
        };

        void incGrade(int value);
        void decGrade(int value);
        std::string getName(void) const;
        int getGrade(void) const;
    private:
        const std::string _name;
        int _grade;
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj);
