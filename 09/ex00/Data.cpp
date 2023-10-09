#include "Data.hpp"

Data::Data(){}
Data::~Data(){}
Data::Data(Data const &src)
{
	*this = src;
}


Data& Data::operator=(const Data& src)
{
	_year = src._year;
	_month = src._month;
	_day = src._day;
	return *this;
}

bool Data::operator>(const Data &rhs) const
{
	if (_year > rhs._year)
		return true;
	if (_year < rhs._year)
		return false;
	if (_month > rhs._month)
		return true;
	if (_month < rhs._month)
		return false;
	if (_day > rhs._day)
		return true;
	return false;
}

bool Data::operator<(const Data &rhs) const
{
	if (_year < rhs._year)
		return true;
	if (_year > rhs._year)
		return false;
	if (_month < rhs._month)
		return true;
	if (_month > rhs._month)
		return false;
	if (_day < rhs._day)
		return true;
	return false;
}

bool Data::operator<=(const Data &rhs) const
{
	return (*this < rhs || *this == rhs);
}

bool Data::operator==(const Data &rhs) const
{
	return _year == rhs._year && _month == rhs._month && _day == rhs._day;
}

bool Data::operator!=(const Data &rhs) const
{
	return !(*this == rhs);
}

int Data::getYear() const
{
	return (_year);
}

int Data::getMonth() const
{
	return (_month);
}

int Data::getDay() const
{
	return(_day);
}

void Data::setYear(int year)
{
	_year = year;
}

void Data::setMonth(int month)
{
	_month = month;
}

void Data::setDay(int day)
{
	_day = day;
}
