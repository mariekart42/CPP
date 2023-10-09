#include "RPN.hpp"

// DEFAULT MAIN
//int main(int ac, char **av)
//{
//  std::cout << YEL << PROGRAM_INFO << RESET << std::endl << std::endl;

//	std::cout << "sheeesh" << std::endl;
//
//	try
//	{
//		if (ac != 2)
//			throw std::invalid_argument("pls give me one expression!");
//		RPN obj;
//		std::cout << GRN << "RESULT: " << obj.doYourThing(av[1]) << RESET << std::endl;
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << RED << "ERROR: " << e.what() << RESET << std::endl;
//	}
//}



// EXTRA TESTS
int main()
{
	std::cout << YEL << PROGRAM_INFO << RESET << std::endl << std::endl;
	{
		try // 1 + 1     --> not valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "1 + 1";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl << std::endl; // will not happen
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
	{
		try // 1 1 +     -->  valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "1 1 +";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;  // will not happen
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
	{
		try // 8 9 * 9 - 9 - 9 - 4 - 1 +    --> valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "8 9 * 9 - 9 - 9 - 4 - 1 +";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
	{
		try // 9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -   --> valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
	{
		try // 1 2 3 +     --> not valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "1 2 3 +";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl; // will not happen
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
	{
		try // 1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /     --> valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
	{
		try // 0 1 /     -->  valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "1 0 /";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
	{
		try // 1 0 /     -->  not valid
		{
			std::cout << RESET << "------------------------" << std::endl;
			std::string noPRN = "1 0 /";
			std::cout << "-- INPUT:  " << YEL << noPRN << RESET << std::endl;
			RPN obj1;
			int result = obj1.doYourThing(noPRN);
			std::cout << "-- " << GRN << "RESULT: " << result << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "-- " << RED << "ERROR: " << e.what() << RESET << std::endl;
			std::cout << RESET << "------------------------" << std::endl << std::endl;
		}
	}
}
