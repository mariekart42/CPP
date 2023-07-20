#include "Bureaucrat.hpp"
#include "Form.hpp"

// int main()
// {
// 	Bureaucrat obj1;
// 	Bureaucrat obj2("kringe", 6999);

// 	std::cout << "obj1 <name>:  " << obj1.getName() << "\t<grade>:  " << obj1.getGrade() << std::endl; 
// 	std::cout << "obj2 <name>:  " << obj2.getName() << "\t<grade>:  " << obj2.getGrade() << std::endl; 
// }

int main()
{
	std::cout << "Attempting to create a form with a too low grade (151):" << std::endl;
	try
	{
		Form temp("test", 151, 23);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "Attempting to create a form with a too high grade (0):" << std::endl;
	try
	{
		Form temp("test", 98, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Form datform("Dat Form", 98, 23);
	// Form datform2(datform);
	// Bureaucrat bubs("Bubs", 98);
	// Bureaucrat shmubs("Shmubs", 99);
	std::cout << std::endl << datform << std::endl;
	// std::cout << datform2 << std::endl;
	// bubs.signForm(datform);
	// shmubs.signForm(datform2);
	// datform2 = datform;
	// std::cout << datform2 << std::endl;
}