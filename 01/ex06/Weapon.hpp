#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string type);
		std::string	getType(void);
	private:
		std::string _type;
};

#endif