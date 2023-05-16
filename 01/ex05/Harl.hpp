#pragma once
#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		bool initSuccess;
		void	complain(std::string level);
		void throwError(std::string msg);
		Harl(int ac, char **&av);
		~Harl();
};
//test ssh
// another ssh shit