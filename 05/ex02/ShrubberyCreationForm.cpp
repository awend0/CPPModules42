#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other), _target(other._target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::ofstream fs((this->_target + "_shrubbery").c_str());
    fs << "                                              ." << std::endl <<
    "                                   .         ;" << std::endl <<
    "      .              .              ;%     ;;" << std::endl <<
    "        ,           ,                :;%  %;" << std::endl <<
    "         :         ;                   :;%;'     .," << std::endl <<
    ",.        %;     %;            ;        %;'    ,;" << std::endl <<
    "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
    "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
    "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
    "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
    "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
    "         `:%;.  :;bd%;          %;@%;'" << std::endl <<
    "           `@%:.  :;%.         ;@@%;'" << std::endl <<
    "             `@%.  `;@%.      ;@@%;" << std::endl <<
    "               `@%%. `@%%    ;@@%;" << std::endl <<
    "                 ;@%. :@%%  %@@%;" << std::endl <<
    "                   %@bd%%%bd%%:;" << std::endl <<
    "                     #@%%%%%:;;" << std::endl <<
    "                     %@@%%%::;" << std::endl <<
    "                     %@@@%(o);  . '" << std::endl <<
    "                     %@@@o%;:(.,'" << std::endl <<
    "                 `.. %@@@o%::;" << std::endl <<
    "                    `)@@@o%::;" << std::endl <<
    "                     %@@(o)::;" << std::endl <<
    "                    .%@@@@%::;" << std::endl <<
    "                    ;%@@@@%::;." << std::endl <<
    "                   ;%@@@@%%:;;;." << std::endl <<
    "               ...;%@@@@@%%:;;;;,.." << std::endl;

    fs.close();
    std::cout << "Shrubbery created in " << this->_target << "_shrubbery!" << std::endl;
}
