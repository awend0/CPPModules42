#include "Contact.hpp"

Contact::Contact(void){}

Contact::Contact(int fields)
{
	for (int i = 0 ; i < fields; i++)
	{
		std::cout << Contact::_fields_names[i] << ": ";
		getline(std::cin, this->_fields[i]);
	}
}

void Contact::print(void)
{
	for (int i = 0; i < 3; i++)
		std::cout << "|" << std::setw(10) << (this->_fields[i].length() > 10 ? this->_fields[i].substr(0, 9) + "." : this->_fields[i]);
	std::cout << "|" << std::endl;
}