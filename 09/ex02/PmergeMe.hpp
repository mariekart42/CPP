#pragma once

#define GREEN  "\x1B[1;32m"
#define YELLOW "\x1B[1;33m"
#define RESET  "\x1B[0;37m"
#define BLUE   "\033[36m"
#define RED    "\033[0;31m"

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>


#define PRINT_TIME ((static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC) * 1e3)


enum lol
{
	before_sort,
	after_sort
};

template<typename T>
void pb_and_erase(T &three, T &lol)
{
	three.push_back(lol.at(0));
	lol.erase(lol.begin());
}


template<typename T>
T merge(T one, T two)
{
	T three;

	while (one.size() != 0 && two.size() != 0)
		one.at(0) > two.at(0) ? pb_and_erase(three, two) : pb_and_erase(three, one);
	while (one.size() != 0)
		pb_and_erase(three, one);
	while (two.size() != 0)
		pb_and_erase(three, two);
	return (three);
}


template<typename T>
T merge_sort(T oriVec)
{
	if (oriVec.size() == 1)
		return (oriVec);

	int size = oriVec.size();

	T   vec1(oriVec.begin(), oriVec.begin() + size / 2);
	T   vec2(oriVec.begin() + size / 2, oriVec.end());

	vec1 = merge_sort(vec1);
	vec2 = merge_sort(vec2);

	return (merge(vec1, vec2));
}

template<typename T>
T insertion_sort(T arr)
{
	int size = arr.size();
	int i;
	int j;

	for (i = 1; i < size; i++)
	{
		j = i;
		while (j > 0 && arr.at(j - 1) > arr.at(j))
		{
			int swap = arr.at(j - 1);
			arr.at(j - 1) = arr.at(j);
			arr.at(j) = swap;
			j--;
		}
	}
	return arr;
}

template<typename T>
T doYourSortingThing(T container)
{
	int size = container.size();

	if (size <= 1)
		return container;

	T sorted;

	for (int i = 0; i < size; i += 2)
	{
		int end = std::min(i + 2, size);
		T chunk(container.begin() + i, container.begin() + end);
		chunk = insertion_sort(chunk);
		sorted = merge(sorted, chunk);
	}
	return sorted;
}

template <typename T>
T initContainer(int ac, char **av)
{
	T container;

	for (int i = 1; i < ac; i++)
		container.push_back(atoi(av[i]));

	return container;
}

template<typename T>
void printContainer(T &container, lol type)
{
	type == before_sort ? std::cout << YELLOW << "BEFORE: " : std::cout << GREEN << "AFTER: ";
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << "  ";
	std::cout << RESET << std::endl;
}


void checkInput(int, char **);
