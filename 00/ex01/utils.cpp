#include "phoneBook.hpp"

void clear(void){system("clear");}

bool onlySpaces(std::string input)
{
	for (size_t x = 0; x<input.size(); x++)
		if (!std::isspace(input[x]))
			return (false);
	return (true);
}