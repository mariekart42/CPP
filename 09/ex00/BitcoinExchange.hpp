#ifndef BTC_HPP
#define BTC_HPP


# define GRN "\x1B[1;32m"
# define YEL "\x1B[1;33m"
# define BLU "\033[36m"
# define RED "\033[0;31m"
# define RESET "\x1B[0;37m"


#include <iostream>
#include <map>
#include <sstream>
#include <fstream>

struct Data
{
	int _year;
	int _month;
	int _day;

	bool operator<(const Data& other) const
	{
		if (_year != other._year)
			return _year < other._year;
		if (_month != other._month)
			return _month < other._month;
		return _day < other._day;
	}
};

class btc
{
	private:
		std::map<Data, double> _something;
	public:
		btc();
		btc(const btc&);
		btc& operator=(const btc&);
		~btc();

		void parseInput(int ac, char *file);
};


#endif
