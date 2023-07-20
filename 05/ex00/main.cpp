#include "Bureaucrat.hpp"

// int main()
// {
// 	Bureaucrat obj1;
// 	Bureaucrat obj2("kringe", 6999);

// 	std::cout << "obj1 <name>:  " << obj1.getName() << "\t<grade>:  " << obj1.getGrade() << std::endl; 
// 	std::cout << "obj2 <name>:  " << obj2.getName() << "\t<grade>:  " << obj2.getGrade() << std::endl; 
// }

int main(void)
{
	Bureaucrat one("one", 36);

	std::cout << "\033[34mExcpected output \"too low\":\t\033[0m";
	try {
		Bureaucrat up("TOO LOW", 151);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[34mExcpected output \"too high\":\t\033[0m";
	try {
		Bureaucrat op("TOO HIGH", 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl << " ------------------------------------------------ "<< std::endl << std::endl;
	}

	Bureaucrat gosu("Gosu", 1);
	Bureaucrat boon("Boon", 150);
	std::cout << gosu << std::endl;
	std::cout << boon << std::endl << std::endl;

	std::cout << "Trying to increment Gosu:" << std::endl;
	std::cout << "\033[34mExcpected output \"too high\":\t\033[0m";
	try {
		gosu.incrementGrade();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << gosu << std::endl << std::endl;

	std::cout << "Trying to decrement Boon:" << std::endl;
	std::cout << "\033[34mExcpected output \"too low\":\t\033[0m";
	try {
		boon.decrementGrade();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << boon << std::endl << std::endl << " ------------------------------------------------ " << std::endl <<std::endl;

	std::cout << "Trying to increment Boon:" << std::endl;
	std::cout << "\033[34mExcpected output \"grade: 149\":\t\033[0m";
	try {
		boon.incrementGrade();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << boon << std::endl << std::endl;
	std::cout << "Trying to decrement Gosu:" << std::endl;
	std::cout << "\033[34mExcpected output \"grade: 2\":\t\033[0m";
	try {
		gosu.decrementGrade();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << gosu << std::endl <<std::endl <<" ------------------------------------------------ "<< std::endl<<std::endl;
}