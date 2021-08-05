#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout	<< "str: " << str << std::endl
				<< "ptr: " << ptr << std::endl
				<< "ref: " << ref << std::endl;
}