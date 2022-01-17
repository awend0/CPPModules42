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
        void (Karen::*_functions[4])(void);
        std::string _messages[4];
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif