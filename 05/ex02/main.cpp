#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

// int main()
// {
// 	std::cout << "test" << std::endl;

// 	Bureaucrat randomBurr;

// 	ShrubberyCreationForm obj1;
// 	std::cout << obj1.execute(randomBurr) << std::endl;
// 	ShrubberyCreationForm obj2;
// 	std::cout << obj2.execute() << std::endl;
// }

int main()
{
	std::string partition(50, '-');

	// std::cout << partition << std::endl;
	// std::cout << "TEST 1: ShrubberyCreationForm" << std::endl;
	// std::cout << partition << std::endl;
	// {
		// Bureaucrat bur;
		// ShrubberyCreationForm form("Shrubbery target");
		// try
		// {
		// 	form.beExecuted(bur);
		// }
		// catch(std::exception& e)
		// {
		// 	std::cout << "\033[34mexpected output -> <name> Failed to execute <name>\n\t: \033[0m";
		// 	std::cout << bur.getName() << " failed to execute " << form.getName() << std::endl;
		// 	std::cout << "\033[34mexpected output -> Form is not signed\n\t: \033[0m";
		// 	std::cout << e.what() << std::endl;
		// }
		// try
		// {
		// 	std::cout << "\033[34mexpected output -> <name> was signed by <name>\n\t: \033[0m";
		// 	form.beSigned(bur);
		// }
		// catch(std::exception& e)
		// {
		// 	std::cout << bur.getName() << " failed to sign " << form.getName() << ": ";
		// 	std::cout << e.what() << std::endl;
		// }

		// Bureaucrat big("bigboiii", 1); // required grade to sign: 145, to execute: 137.
		// try
		// {
		// 	std::cout << "\033[34mexpected output -> <name> was executed by <name>\n\t: \033[0m";
		// 	form.beExecuted(big);
		// }
		// catch(std::exception& e)
		// {
		// 	std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
		// 	std::cout << e.what() << std::endl;
		// }
		// try
		// {
		// 	std::cout << "\033[34mexpected output -> <name> Was signed by <name>\n\t: \033[0m";
		// 	form.beSigned(big);
		// }
		// catch(std::exception& e)
		// {
		// 	std::cout << big.getName() << " failed to sign " << form.getName() << ": ";
		// 	std::cout << e.what() << std::endl;
		// }
		// try
		// {
		// 	std::cout << "\033[34mexpected output -> <name> Was executed by <name>\n\t: \033[0m";
		// 	form.beExecuted(big);
		// }
		// catch(std::exception& e)
		// {
		// 	std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
		// 	std::cout << e.what() << std::endl;
		// }
	// }
	
	std::cout << partition << std::endl;
	std::cout << "TEST 2: Robotomy" << std::endl;
	std::cout << partition << std::endl;
	{
		Bureaucrat bur;
		RobotomyRequestForm form("Robotomy target");
	
		// try
		// {
		// 	form.beExecuted(bur);
		// }
		// catch(std::exception& e)
		// {
		// 	std::cout << bur.getName() << " failed to execute " << form.getName() << ": ";
		// 	std::cout << e.what() << std::endl;
		// }
		try
		{
			form.beSigned(bur);
		}
		catch(std::exception& e)
		{
			std::cout << bur.getName() << " failed to sign " << form.getName() << ": ";
			std::cout << e.what() << std::endl;
		}

	// 	Bureaucrat big("bigboiii", 45); // required grade to sign: 72, to execute: 45.
	// 	try
	// 	{
	// 		form.beExecuted(big);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		form.beSigned(big);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << big.getName() << " failed to sign " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		form.beExecuted(big);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	
	// std::cout << partition << std::endl;
	// std::cout << "Scope 3: Pardon" << std::endl;
	// std::cout << partition << std::endl;
	// {
	// 	Bureaucrat bur;
	// 	PresidentialPardonForm form("Pardoning target");
	
	// 	try
	// 	{
	// 		form.beExecuted(bur);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << bur.getName() << " failed to execute " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		form.beSigned(bur);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << bur.getName() << " failed to sign " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}

	// 	Bureaucrat big("bigboiii", 5); // required grade to sign: 25, to execute: 5.
	// 	try
	// 	{
	// 		form.beExecuted(big);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		form.beSigned(big);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << big.getName() << " failed to sign " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		form.beExecuted(big);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
	// 		std::cout << e.what() << std::endl;
	// 	}
	}
}
