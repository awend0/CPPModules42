#include "Contact.h"

Contact::Contact()
{
	for (int i = 0 ; i < 10; i++)
	{
		std::cout << Contact::_names[i] << ": ";
		getline(std::cin, this->_fields[i]);
	}
}

void	Contact::print(void)
{
	for (int i = 0; i < 3; i++)
		std::cout << "|" << std::setw(10) << (this->_fields[i].length() > 10 ? this->_fields[i].substr(0, 9) + "." : this->_fields[i]);
	std::cout << "|" << std::endl;
}

void	print_all(std::vector<Contact> phonebook)
{
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for (size_t i = 0; i < phonebook.size(); i++)
	{
		std::cout << "|" << std::setw(10) << i;
		phonebook[i].print();
	}
}

int main(void)
{
	std::vector<Contact>	phonebook;

	std::string input;
	while (1)
	{
		std::cout << "phonebook$ ";
		getline(std::cin, input);
		if (input == "EXIT")
			exit(0);
		else if (input == "SEARCH")
			print_all(phonebook);
		else if (input == "ADD")
		{
			if (phonebook.size() >= 8)
				std::cout << "Crappy phonebook out of memory T_T" << std::endl;
			else
				phonebook.push_back(Contact());
		}
		else
			system("clear");
	}
}