#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_size = 0;
}

void PhoneBook::add_contact(void)
{
	if (this->_size >= 8)
	{
		std::cout << "Crappy phonebook out of memory T_T" << std::endl;
		std::cout << "Replacing your last contact then" << std::endl;
		this->_contacts[7] = Contact(5);
	}
	else
	{
		this->_contacts[this->_size] = Contact(5);
		this->_size++;
	}
}

void PhoneBook::display_contacts(void)
{
	if (this->_size > 0)
	{
		std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
		for (int i = 0; i < this->_size; i++)
		{
			std::cout << "|" << std::setw(10) << i;
			this->_contacts[i].print();
		}
	}
	else
		std::cout << "Your phonebook is empty right now" << std::endl;
}