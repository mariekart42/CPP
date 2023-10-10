#include "PmergeMe.hpp"

void    checkInput(int ac, char **av)
{
	if (ac < 2)
		throw std::invalid_argument("Pls Provide Arguments");
	for (int x = 1; x < ac; x++)
	{
		std::string tmp = av[x];
		for (unsigned int i = 0 ; i < tmp.size(); i++)
			if (!isdigit(tmp.at(i)))
				throw std::invalid_argument("Only positive Numbers!");
	}
}
