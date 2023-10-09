#ifndef RPN_HPP
#define RPN_HPP

# define GRN "\x1B[1;32m"
# define YEL "\x1B[1;33m"
# define BLU "\033[36m"
# define RED "\033[0;31m"
# define RESET "\x1B[0;37m"

#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>
#include <cstdlib>

#define INVALID_RPN "Invalid RPN expression"
#define PROGRAM_INFO "PROGRAM INFO:\n- between number and operator min one space!\n- valid operators: - + * /\n- valid syntax: <num> <num> <operator>\n- invalid syntax:\n  - <num> <operator> <num>\n  - <operator> <num> <num>"


class RPN
{
	private:
		std::stack<int> _operandStack;
	public:
		RPN();
		RPN(const RPN&);
		RPN& operator=(const RPN&);
		~RPN();

		int doYourThing(std::string);
		int calculate(const std::string&);
};


#endif
