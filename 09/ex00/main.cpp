#include "BitcoinExchange.hpp"




int main(int ac, char *av[])
{
	std::cout << "lol" << std::endl;

	try
	{
		btc obj;
		obj.parseInput(ac, av[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
	}


}
