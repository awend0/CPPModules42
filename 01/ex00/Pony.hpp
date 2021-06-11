#ifndef PONY_H
# define PONY_H
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