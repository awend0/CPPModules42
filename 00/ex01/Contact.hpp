#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact(int fields);
		Contact();
		void print(void);
		std::string _fields_names[10] =	{"first name",
									 "last name",
							   	 	 "nickname",
									 "phone number",
									 "darkest secret"};
	private:
		std::string	_fields[11];
};

#endif