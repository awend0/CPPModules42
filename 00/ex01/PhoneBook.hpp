#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void display_contacts(void);
		void add_contact(void);
	private:
		int _size;
		Contact _contacts[8];
};

#endif