#include "Contact.hpp"
#include <iostream>
#include <iomanip>

static void print_all(Contact *phonebook, int size)
{
	if (size > 0)
	{
		std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
		for (int i = 0; i < size; i++)
		{
			std::cout << "|" << std::setw(10) << i;
			phonebook[i].print();
		}
	}
	else
		std::cout << "Your phonebook is empty right now" << std::endl;
}

int main(void)
{
	Contact 	phonebook[8];
	std::string input;
	int			size = 0;

	while (1)
	{
		std::cout << "phonebook$ ";
		getline(std::cin, input);
		if (input == "EXIT")
			exit(0);
		else if (input == "SEARCH")
			print_all(phonebook, size);
		else if (input == "ADD")
		{
			if (size >= 8)
				std::cout << "Crappy phonebook out of memory T_T" << std::endl;
			else
			{
				phonebook[size] = Contact(10);
				size++;
			}
		}
		else
			system("clear");
	}
}