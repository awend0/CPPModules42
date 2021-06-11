#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact(int fields);
		Contact();
		void			print(void);
		std::string		_names[10] = {"First name",
									 "Last name",
							   	 	 "Nickname",
									 "Login",
									 "Postal address",
									 "Email address",
									 "Phone number",
									 "Favorite meal",
									 "Underwear color",
									 "Darkest secret"};
	private:
		std::string	_fields[11];
};

#endif