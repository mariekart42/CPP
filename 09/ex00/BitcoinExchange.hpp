#ifndef BTC_HPP
#define BTC_HPP

# define GRN "\x1B[1;32m"
# define RED "\033[0;31m"
# define RESET "\x1B[0;37m"

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include "Data.hpp"

#define DATA_SEARCH ","
#define INPUT_SEARCH " | "
#define INVALID_FORMAT "Date format must contain ',' in each line for database and '|' in each line for input file and the separator between date and value"
#define INVALID_VALUE ("Invalid Value [" + fileName + "]: \"" + line + "\"!")
#define DATE_NOPE (std::cerr << RED"Error: Date does not exist." << RESET << std::endl)
#define INVALID_DATE (std::cerr << RED"Error: Date must be between 2009-01-02 and 2022-03-29" << RESET << std::endl)
#define PRINT_DATE (std::cout<<key.getYear()<<"-"<<key.getMonth()<<"-"<<key.getDay()<<" => "<<amount<<GRN" = ")
#define PRINT_AMOUNT (std::cout<<it_db->second*amount<<RESET<<std::endl)

enum Type
{
	Data_csv,
	Input_txt
};

class btc
{
	private:
		std::map<Data, float> _data;

	public:
		btc();
		btc(const btc&);
		btc& operator=(const btc&);
		~btc();

		void        findValue(Data&, float);
		void        doYourThing(const std::string&, Type, const std::string&);
		static int  data_check(Data&);
		static void initData(const std::string&, Data&);
		static bool myStoF(const std::string&, float&);
		static void doTests(btc obj);
};

#endif
