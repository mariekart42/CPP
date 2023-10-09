#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN& src)
{
	*this = src;
}
RPN& RPN::operator=(const RPN&)
{
	return *this;
}
RPN::~RPN() {}


int RPN::doYourThing(std::string expression)
{
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1])))
			_operandStack.push(atoi(token.c_str()));
		else
		{
			if (_operandStack.size() < 2)
				throw std::invalid_argument(INVALID_RPN);
			_operandStack.pop();
			_operandStack.pop();
			_operandStack.push(1); // Push a dummy operand
		}
	}
	if (_operandStack.size() != 1)
		throw std::invalid_argument(INVALID_RPN);
	_operandStack.pop(); // remove the dummy
	return calculate(expression);
}

int RPN::calculate(const std::string& expression)
{
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1])))
			_operandStack.push(atoi(token.c_str()));
		else
		{
			if (_operandStack.size() < 2)
				throw std::invalid_argument(INVALID_RPN);
			int operand2 = _operandStack.top();
			_operandStack.pop();
			int operand1 = _operandStack.top();
			_operandStack.pop();

			if (token == "+")
				_operandStack.push(operand1 + operand2);
			else if (token == "-")
				_operandStack.push(operand1 - operand2);
			else if (token == "*")
				_operandStack.push(operand1 * operand2);
			else if (token == "/")
				operand2 != 0 ? _operandStack.push(operand1 / operand2) : throw std::invalid_argument("Division by zero");
			else
				throw std::invalid_argument("Error: Invalid operator - " + token);
		}
	}
	if (_operandStack.size() != 1)
		throw std::invalid_argument(INVALID_RPN);
	return _operandStack.top();
}
