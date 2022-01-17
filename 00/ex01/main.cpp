#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
	PhoneBook phonebook;
	std::string input;

	while (1)
	{
		std::cout << "phonebook$ ";
		getline(std::cin, input);
		if (input == "EXIT")
			exit(0);
		else if (input == "SEARCH")
			phonebook.display_contacts();
		else if (input == "ADD")
			phonebook.add_contact();
		else
			system("clear");
	}
}