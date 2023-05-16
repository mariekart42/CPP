#include "HarlFilter.hpp"

HarlFilter::HarlFilter(int ac)
{
	this->initSuccess = true;
	if (ac != 2)
	{
		this->initSuccess = false;
		throwError("Invalid Input! -> usage: ./harlFilter  <complain>");
	}
}

HarlFilter::~HarlFilter(){}


bool HarlFilter::getInitSuccess(void)
{
	return (this->initSuccess);
}

void HarlFilter::throwError(std::string msg)
{
	std::cout << msg<<std::endl;
}

//	-----  complain functions  -----
void HarlFilter::debug(void)
{
	std::cout << "  It's a DEBUG" << std::endl;
}
void HarlFilter::info(void)
{
	std::cout << "  It's a INFO" << std::endl;
}
void HarlFilter::warning(void)
{
	std::cout << "  It's a WARNING" << std::endl;
}
void HarlFilter::error(void)
{
	std::cout << "  It's a ERROR" << std::endl;
}


void HarlFilter::complain(std::string level)
{
	std::string complainArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// create array of referenced pointers to private functions of HarlFilter class
	void (HarlFilter::*functionArray[4])(void) = {&HarlFilter::debug, &HarlFilter::info, &HarlFilter::warning, &HarlFilter::error};

	for (int x = 0; x<4; x++)
		if (level == complainArray[x])
			return ((this->*functionArray[x])(), (void)0);
}
