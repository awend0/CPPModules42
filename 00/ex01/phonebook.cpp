#include <iostream>
#include <iomanip>

class	Contact
{
	public:
		std::string	fields[11];
		int			index;
		Contact()
		{
			index = -1;
		}
};

void	cmd_search(Contact *contacts)
{
	std::cout << "|   Index  |First name|Last name |Nickname  |\n";
	for (int j = 0; j < 8; j++)
	{
		if (contacts[j].index != -1)
		{
			std::cout << "|" << std::setw(10) << contacts[j].index + 1;
			for (int i = 0; i <= 2; i++)
			{
				std::cout << "|";
				if (contacts[j].fields[i].length() > 10)
					std::cout << contacts[j].fields[i].substr(0, 9) << ".";
				else
					std::cout << std::setw(10) << contacts[j].fields[i];
			}
			std::cout << "|" << std::endl;
		}
	}
}

void	cmd_add(Contact *contacts, int index)
{
	contacts[index].index = index;
	std::cout << "Please enter new contact first name: "; getline(std::cin, contacts[index].fields[0]); 
	std::cout << "Please enter new contact last name: "; getline(std::cin, contacts[index].fields[1]); 
	std::cout << "Please enter new contact nickname: "; getline(std::cin, contacts[index].fields[2]); 
	std::cout << "Please enter new contact login: "; getline(std::cin, contacts[index].fields[3]); 
	std::cout << "Please enter new contact postal address: "; getline(std::cin, contacts[index].fields[4]); 
	std::cout << "Please enter new contact email address: "; getline(std::cin, contacts[index].fields[5]); 
	std::cout << "Please enter new contact phone number: "; getline(std::cin, contacts[index].fields[6]); 
	std::cout << "Please enter new contact birthday date: "; getline(std::cin, contacts[index].fields[7]); 
	std::cout << "Please enter new contact favorite meal: "; getline(std::cin, contacts[index].fields[8]); 
	std::cout << "Please enter new contact underwear color: "; getline(std::cin, contacts[index].fields[9]); 
	std::cout << "Please enter new contact darkest secret: "; getline(std::cin, contacts[index].fields[10]);
}

int main(void)
{
	Contact contacts[8];
	int		counter = 0;

	while (1)
	{
		std::string	input;
		std::cout << "phonebook$ ";
		getline(std::cin, input);
		system("clear");
		if (input == "EXIT")
			exit(0);
		else if (input == "SEARCH")
			cmd_search(contacts);
		else if (input == "ADD")
		{
			if (counter >= 8)
				std::cout << "No more space in CRAPPY PHONEBOOK T_T\n";
			else
			{
				cmd_add(contacts, counter);
				counter++;
			}
		}
	}
}