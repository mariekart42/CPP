#include "BitcoinExchange.hpp"
#define DATA_FILE "data.csv"



int main(int ac, char *av[])
{
	std::cout << "lol" <<RESET<< std::endl;

	try
	{
		if (ac != 2)
			throw std::invalid_argument("INPUT:  ./btc  <input.txt>");
		btc obj;
		obj.doYourThing("data.csv", Data_csv, DATA_SEARCH);//kasalla(fileName, Data_csv, DATA_SEARCH);
		obj.doYourThing(av[1], Input_txt, INPUT_SEARCH);//kasalla(argv, Input_txt, INPUT_SEARCH);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
	}
}
