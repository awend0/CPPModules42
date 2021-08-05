#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void) const
{
	const long			addr = (long)this;
	std::stringstream	stream;

	stream << "0x" << std::uppercase << std::hex << addr;
	return (stream.str());
}