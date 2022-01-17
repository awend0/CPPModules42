#include <iostream>
#include <fstream>

std::string	str_replace(std::string	str, std::string search, std::string replace)
{
	std::string ret("");
	size_t j;
	size_t len = search.length();

	for (size_t i = 0; i < str.length(); i++)
	{
		j = 0;
		while (str[i + j] == search[j] && j < len)
			j++;
		if (j == len)
		{
			ret += replace;
			i += (j - 1);
		}
		else
			ret += str[i];
	}
	return (ret);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <search> <replace>" << std::endl;
		return (1);
	}
	std::string		filename = argv[1];
	std::string		search = argv[2];
	std::string		replace = argv[3];
	std::string		tmp;
	if (filename.length() == 0 || search.length() == 0)
	{
		std::cout << "Wrong filename/string to search/string to replace" << std::endl;
		return (1);
	}
	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cout << "Unable to open input file" << std::endl;
		return (1);
	}
	outfile.open((filename + ".replace").c_str(), std::ios::trunc);
	if (!outfile.is_open())
	{
		std::cout << "Unable to open output file" << std::endl;
		return (1);
	}
	while (std::getline(infile, tmp))
		outfile << str_replace(tmp, search, replace) << std::endl;
	infile.close();
	outfile.close();
}