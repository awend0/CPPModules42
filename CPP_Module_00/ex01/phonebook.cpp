#include <iostream>
#include <iomanip>

class	Contact
{
	public:
		int			index;
		std::string	fields[11];

		Contact(int _index, std::string *_fields)
		{
			index = _index;
			for (int i = 0; i < 11; i++)
				fields[i] = _fields[i];
		}
		Contact()
		{
			index = -1;
		}
};

void	cmd_search(Contact *contacts)
{
	std::cout << "Index\t\tFirst name\t\tLast name\t\tNick name\n\n";
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].index != -1)
		{
			std::cout	<< contacts[i].index << "\t"
						<< contacts[i].fields[0] << "\t"
						<< contacts[i].fields[1] << "\t"
						<< contacts[i].fields[2] << "\t";
			std::cout << "\n";
		}
	}
}

void	cmd_add(Contact *contacts)
{
	
}

int main(void)
{
	Contact contacts[8];
	int		counter = 0;

	while (1)
	{
		std::string	input;
		switch (input)
		{
			case "EXIT":
				exit(0);
			case "SEARCH"
				cmd_search()
				break ;
			case "ADD"
				if (counter > 8)
					exit(0);
				cmd_add(contacts);
				counter++;
				break ;
		}
	}
}