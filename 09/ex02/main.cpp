#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	clock_t         startTime;
	clock_t         endTime;

	{
		std::cout << RESET << "\nSORT VECTOR:" << std::endl;
		try // for vector
		{
			checkInput(ac, av);

			startTime = clock();
			std::vector<int> unsortedVec = initContainer<std::vector<int> >(ac, av);
			printContainer(unsortedVec, before_sort);

			std::vector<int> sortedVec = doYourSortingThing(unsortedVec);
			printContainer(sortedVec, after_sort);
			endTime = clock();
			std::cout << "Time for Vector: " << PRINT_TIME << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << "\nSORT DEQUE:" << std::endl;
		try // for deque
		{
			checkInput(ac, av);

			startTime = clock();
			std::deque<int> unsortedVec = initContainer<std::deque<int> >(ac, av);
			printContainer(unsortedVec, before_sort);

			std::deque<int> sortedVec = doYourSortingThing(unsortedVec);
			printContainer(sortedVec, after_sort);
			endTime = clock();
			std::cout << "Time for Deque: " << PRINT_TIME << std::endl << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << "ERROR: " << e.what() << RESET << std::endl << std::endl;
		}
	}
}

// vector elements are contiguous in memory -> therefore we can access elements very quick in the vector
// doesn't matter at witch position (end/middle/beginning)

// deque elements are not contiguous in memory -> therefore it takes longer to access elements
// in the middle of a deque and lets the sorting operation last longer


// --> the larger the amount of numbers, the bigger the time difference!
