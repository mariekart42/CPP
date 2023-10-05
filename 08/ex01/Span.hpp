#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <climits>
#include <stdexcept>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand


# define GRN "\x1B[1;32m"
# define YEL "\x1B[1;33m"
# define BLU "\033[36m"
# define RED "\033[0;31m"
# define RESET "\033[0m"



class Span
{
    private:
        unsigned int _N;
		std::vector<int> _elements;
		unsigned int _index;

    public:
        Span(int);
		Span(Span const&);
        ~Span();
		Span& operator=(Span const&);
        void addNumber(long);
		long shortestSpan();
		long longestSpan();
		void add_many_more();
		void print();
		static int RandomNumber();
};


#endif
