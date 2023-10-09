#include "BitcoinExchange.hpp"


btc::btc() {}
btc::btc(const btc& src)
{
	*this = src;
}
btc& btc::operator=(const btc& obj)
{
	return *this;
	(void)obj;
}
btc::~btc() {}



void btc::parseInput(int ac, char *file)
{
	if (ac != 2)
		throw std::invalid_argument("Provide file pls");


	std::ifstream inputFile(file);
	if (!inputFile.is_open())
		throw std::runtime_error("Could not open input File");

	std::string line;
	while (std::getline(inputFile, line))
	{
		std::istringstream lineStream(line);
		std::string dateString;
		double value;

		if (lineStream >> dateString >> value)
		{
			std::istringstream dateStream(dateString);
			char dash;
			Data date = {};

			if (dateStream >> date._year >> dash >> date._month >> dash >> date._day)
			{
				_something[date] = value;
			}
			else if (line == "date | value\n")
			{
				continue;
			}
			else
			{
				std::string lol = "Invalid date format in line: " + line;
				throw std::invalid_argument(lol);
			}
		}
//		else
//		{
//			std::string lol = "Invalid input format in line: " + line;
//			throw std::invalid_argument(lol);
//		}
	}

}






