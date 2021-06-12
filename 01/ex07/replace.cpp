#include <iostream>
#include <fstream>
#include <sstream>

void	exit_with_error(std::string err)
{
	std::cout << err << std::endl;
	exit (0);
}

std::string	str_replace(std::string	str, std::string search, std::string replace)
{
	std::stringstream	stream;
	size_t				j;
	size_t				slength = search.length();

	for (size_t i = 0; i < str.length(); i++)
	{
		j = 0;
		while (str[i + j] == search[j] && j < slength)
			j++;
		if (j == slength)
		{
			stream << replace;
			i += (j - 1);
		}
		else
			stream << str[i];
	}
	return (stream.str());
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		exit_with_error("Usage: ./replace <filename> <search> <replace>");
	std::string		filename = argv[1];
	std::string		search = argv[2];
	std::string		replace = argv[3];
	std::string		tmp;
	if (filename.length() == 0 || search.length() == 0 || replace.length() == 0)
		exit_with_error("Wrong filename/string to search/string to replace");
	std::ifstream	infile;
	std::ofstream	outfile;


	infile.open(filename);
	if (!infile.is_open())
		exit_with_error("Unable to open input file");
	outfile.open(filename + ".replace", std::ios::trunc);
	if (!outfile.is_open())
		exit_with_error("Unable to open output file");
	while (std::getline(infile, tmp))
		outfile << str_replace(tmp, search, replace) << std::endl;
	infile.close();
	outfile.close();
}