#include "BitcoinExchange.hpp"

btc::btc() {}
btc::btc(const btc& src)
{
	*this = src;
}
btc::~btc() {}

btc  &btc::operator=(btc const &src)
{
	_data = src._data;
	return *this;
}

void btc::findValue(Data &key, float amount)
{
	if (amount < 0)
		return std::cerr << RED"Error: Value too smol [>0]" << RESET << std::endl, (void)0;
	else if (amount > 1000)
		return std::cerr << RED"Error: Value too big [0 - 1.000]" << RESET << std::endl, (void)0;
	if (key.getYear() == -1)
		return std::cerr << RED"Error: Bad input. Data out of range. " << key.flag << RESET << std::endl, (void)0;

	std::map<Data, float>::iterator it_db = _data.begin();

	while (it_db->first <= key && it_db != _data.end())
		it_db++;
	it_db--;
	if (data_check(key))
	{
		PRINT_DATE;
		PRINT_AMOUNT;
	}
}


int btc::data_check(Data &key)
{
	if (key.getYear() > 2022 || (key.getYear() >= 2022 && key.getMonth() > 3) || key.getYear() < 2009)
		return INVALID_DATE, 0;
	if ((key.getMonth() == 1 || key.getMonth() == 3 || key.getMonth() == 5 || key.getMonth() == 7 || key.getMonth() == 8 || key.getMonth() == 10 || key.getMonth() == 12) && key.getDay() > 31)
		return DATE_NOPE, 0;
	if ((key.getMonth() == 4 || key.getMonth() == 6 || key.getMonth() == 9 || key.getMonth() == 11) && key.getDay() > 30)
		return DATE_NOPE, 0;
	if (key.getYear() % 4 == 0 && key.getMonth() == 2 && key.getDay() > 29)
		return DATE_NOPE, 0;
	else if (key.getMonth() && key.getDay() > 28)
		return DATE_NOPE, 0;
	return 1;
}


void btc::doYourThing(const std::string& fileName, Type type, const std::string& searchFor)
{
	std::ifstream inputFile(fileName);
	if (!inputFile.is_open())
		throw std::runtime_error("Could not open input File " + fileName);

	std::stringstream   str_buff;
	str_buff << inputFile.rdbuf();

	int i = 0;
	while (!str_buff.eof())
	{
		std::string line;
		getline(str_buff, line);
		if (type == Data_csv && !i++)
			continue;
		if (line.find(searchFor) == std::string::npos)
			throw std::invalid_argument(INVALID_FORMAT);
		Data time;
		initData(line.substr(0, line.find(searchFor)), time);
		float value;
		int skip = type == Data_csv ? 1 : 3;
		if (!myStoF(line.substr(line.find(searchFor) + skip, line.size() - 1), value))
			type == Data_csv ? throw std::invalid_argument(INVALID_VALUE) : std::cerr << INVALID_VALUE << std::endl;
		if (type == Data_csv)
			_data.insert(std::make_pair(time, value));
		else
			findValue(time, value);
	}
}

void btc::initData(const std::string& str, Data &time)
{
	const char     *format = "%Y-%m-%d";
	std::tm timeStruct = {};
	std::memset(&timeStruct, 0, sizeof(struct tm)); // Initialize the struct with zeroes
	if (strptime(str.c_str(), format, &timeStruct))
	{
		time.setYear(timeStruct.tm_year + 1900);
		time.setMonth(timeStruct.tm_mon + 1);
		time.setDay(timeStruct.tm_mday);
	}
	else
	{
		time.setYear(-1);
		time.flag = str;
	}
}

bool btc::myStoF(const std::string& input, float& output)
{
	std::istringstream iss(input);
	char leftover;

	if (iss >> std::noskipws >> output && !(iss >> leftover))
		return true;

	if (iss.eof() && (input == "0" || input == "-0"))
	{
		output = 0.0f;
		return true;
	}
	return false;
}
