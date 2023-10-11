#include "BitcoinExchange.hpp"

#define AMOUNT_OF_TESTS 5


void btc::doTests(btc obj)
{
	std::cout <<RESET<< "-------------------" <<std::endl;
	std::cout << "CALLED TEST PROGRAM" <<std::endl;
	std::cout << "-------------------" <<std::endl;

	try
	{
		for (int i = 0; i < AMOUNT_OF_TESTS; i++)
		{
			std::cout << GRN << "TEST " << i+1 << RESET << std::endl;
			obj.doYourThing("data.csv", Data_csv, DATA_SEARCH);
			std::string testFile = "myTests/test_" + std::to_string(i+1) + ".txt";
			obj.doYourThing(testFile, Input_txt, INPUT_SEARCH);
			std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Test Error: " << e.what() << RESET << std::endl;
	}
}


// MY TESTS
int main(int ac, char *av[])
{
	try
	{
		btc obj;
		if (ac == 2 && !strcmp("tests", av[1]))
			return obj.doTests(obj), 0;

		if (ac != 2)
			throw std::invalid_argument("INPUT:  ./btc  <input.txt>");
		obj.doYourThing("data.csv", Data_csv, DATA_SEARCH);
		obj.doYourThing(av[1], Input_txt, INPUT_SEARCH);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
	}
}
//2009-01-02
//2022-03-29

