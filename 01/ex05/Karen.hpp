#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen
{
    public:
        Karen();
        ~Karen();
        void complain(std::string level);
    private:
        std::string _messages[4];
        void (Karen::*_functions[4])(void);
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif