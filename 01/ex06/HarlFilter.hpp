#pragma once
#include <iostream>

class HarlFilter
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		bool initSuccess;
	public:
		bool getInitSuccess(void);
		void complain(std::string level);
		void throwError(std::string msg);
		HarlFilter(int ac);
		~HarlFilter();
};