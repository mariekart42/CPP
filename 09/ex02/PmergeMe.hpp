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


#define PRINT_TIME ((static_cast<double>(clock() - startTime) / CLOCKS_PER_SEC) * 1e3)


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

	// always take the bigger number from both containers and push it to three (rm it from the chunk)
	while (one.size() != 0 && two.size() != 0)
		one.at(0) > two.at(0) ? pb_and_erase(three, two) : pb_and_erase(three, one);
	// push and delete everything from one into three
	while (one.size() != 0)
		pb_and_erase(three, one);
	// push and delete everything from two into three
	while (two.size() != 0)
		pb_and_erase(three, two);
	// both chunks are merged into three, three is roughly sorted
	return (three);
}



// merge operation combines two sorted sequences into a single sorted sequence
template<typename T>
T merge_sort(T oriChunk)
{
	if (oriChunk.size() == 1)
		return oriChunk;

	int size = oriChunk.size();

	// dividing original Chunk into two chunks
	T   vec1(oriChunk.begin(), oriChunk.begin() + size / 2);
	T   vec2(oriChunk.begin() + size / 2, oriChunk.end());

	// sorting both chunks separately
	vec1 = merge_sort(vec1);
	vec2 = merge_sort(vec2);

	// merge two smol chunks together
	return merge(vec1, vec2);
}




template<typename T>
void swap(T &a, T &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// sorting chunk from smollest to biggest
template<typename T>
T insertion_sort(T arr)
{
	for (unsigned int i = 1; i < arr.size(); i++)
	{   // swap as long as (prev > current)
		for (int x = i; (x > 0 && arr.at(x - 1) > arr.at(x)); x--)
			swap(arr.at(x - 1), arr.at(x));
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



template<typename T>
void printContainer(T &container, lol type)
{
	type == before_sort ? std::cout << YELLOW << "BEFORE: " : std::cout << GREEN << "AFTER: ";
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << "  ";
	std::cout << RESET << std::endl;
}


template <typename P>
void PmergeMe(P unsortedVec)
{
	clock_t startTime = clock();

	printContainer(unsortedVec, before_sort);
	P sortedVec = doYourSortingThing(unsortedVec);
	printContainer(sortedVec, after_sort);

	std::cout << "Time for Vector: " << PRINT_TIME << std::endl;
}


void checkInput(int, char **);
