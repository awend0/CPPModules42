#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
	public:
		Pony(std::string name, std::string color);
		~Pony();
		void		talk(void);
	private:
		std::string _name;
		std::string _color;
};

#endif