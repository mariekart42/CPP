#include "PmergeMe.hpp"


template <typename T>
T initContainer(int ac, char **av)
{
	T container;

	for (int i = 1; i < ac; i++)
		container.push_back(atoi(av[i]));
	return container;
}



int main(int ac, char **av)
{
	{
		std::cout << RESET << "\nSORT VECTOR:" << std::endl;

		try // for vector
		{
			checkInput(ac, av);
			PmergeMe(initContainer<std::vector<int> >(ac, av));
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
			PmergeMe(initContainer<std::deque<int> >(ac, av));
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
