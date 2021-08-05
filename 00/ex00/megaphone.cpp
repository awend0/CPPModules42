#include <iostream>

std::string	toupper_str(char *str)
{
	std::string	ret = str;

	for (size_t i = 0; i < ret.length(); i++)
		ret[i] = toupper(ret[i]);
	return (ret);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		exit(0);
	}
	for (int i = 1; i < argc; i++)
		std::cout << toupper_str(argv[i]);
	std::cout << std::endl;
}