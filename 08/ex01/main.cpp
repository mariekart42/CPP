#include "Span.hpp"

//int main()
//{
//	try
//	{
//		Span sp = Span(5);
//		sp.addNumber(6);
//		sp.addNumber(3);
//		sp.addNumber(17);
//		sp.addNumber(9);
//		sp.addNumber(11);
//		std::cout << sp.shortestSpan() << std::endl;
//		std::cout << sp.longestSpan() << std::endl;
//		return 0;
//
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what()<<std::endl;
//	}
//    return 0;
//}


// MY TEXT MAIN
int main()
{
	{
		try // TOO MANY ARGUMENTS
		{
			std::cout << YEL"TEST 1 -- TOO MANY ARGUMENTS"RESET << std::endl;
			Span my_array(4);
			my_array.addNumber(2);
			my_array.addNumber(5);
			my_array.addNumber(0);
			my_array.addNumber(-4);
	        my_array.addNumber(2);
			my_array.addNumber(5);
			my_array.addNumber(0);

			my_array.print();
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << std::endl;

	{
		try // TOO FEW ARGUMENTS
		{
			std::cout << YEL"TEST 2 -- TOO FEW ARGUMENTS - FILL WITH 0"RESET << std::endl;
			Span lol(4);

			lol.print();
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		try // LONGEST & SHORTEST SPAN
		{
			std::cout << YEL"TEST 3 -- GOOD LONGEST & SHORTEST SPAN"RESET << std::endl;

			Span myArray(10);
			myArray.addNumber(2);
			myArray.addNumber(5);
			myArray.addNumber(0);
			myArray.addNumber(INT_MAX);
			myArray.addNumber(-4);
			myArray.addNumber(2);
			myArray.addNumber(5);
			myArray.addNumber(INT_MAX);

			myArray.print();

			std::cout << "Longest Span  " <<GRN<< myArray.longestSpan()<<RESET<<std::endl;
			std::cout << "Shortest Span  " <<GRN<< myArray.shortestSpan()<<RESET<<std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		try
		{
			std::cout << YEL << "TEST 4 -- INTEGER OVERFLOW" << RESET << std::endl;

			Span sheeesh(10);
			sheeesh.addNumber(2);
			sheeesh.addNumber(5);
			sheeesh.addNumber(0);
			sheeesh.addNumber(INT_MAX);
			sheeesh.addNumber(-4);
			sheeesh.addNumber(2);
			sheeesh.addNumber(5);
			sheeesh.addNumber(2147483650); // int max is 2147483647

			sheeesh.print();

			std::cout << "Longest Span  " <<GRN<< sheeesh.longestSpan()<<RESET<<std::endl;
			std::cout << "Shortest Span  " <<GRN<< sheeesh.shortestSpan()<<RESET<<std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl;
		}
	}

	std::cout << std::endl << std::endl;
	{
		try
		{
			std::cout << YEL << "TEST 5 -- ADD MANY" << RESET << std::endl;

			Span yeee(10);

			yeee.add_many_more();
			yeee.print();
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl;
		}
	}

	std::cout << std::endl << std::endl;
	{
		try
		{
			std::cout << YEL << "TEST 6 -- ADD MANNY WRONG" << RESET << std::endl;

			Span blob(-10);

			blob.add_many_more();

			blob.print();
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl;
		}
	}
}
