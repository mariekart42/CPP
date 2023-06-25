#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat burbs("Burbs", 36);
	std::cout << "Created " << burbs << std::endl << std::endl;

	std::cout << "Try block: UP, grade 151:" << std::endl;
	try
	{
		Bureaucrat up("UP", 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "Try block: OP, grade 0:" << std::endl;
	try
	{
		Bureaucrat op("OP", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "Printing Bureaucrats:" << std::endl;
	Bureaucrat gosu("Gosu", 1);
	Bureaucrat boon("Boon", 150);
	std::cout << gosu << std::endl;
	std::cout << boon << std::endl << std::endl;

	std::cout << "Trying to increment Gosu:" << std::endl;
	try
	{
		gosu.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << gosu << std::endl << std::endl;

	std::cout << "Trying to decrement Boon:" << std::endl;
	try
	{
		boon.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << boon << std::endl << std::endl;

	std::cout << "Trying to increment Boon:" << std::endl;
	try
	{
		boon.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << boon << std::endl << std::endl;
	std::cout << "Trying to decrement Gosu:" << std::endl;
	try
	{
		gosu.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << gosu << std::endl << std::endl;
}
