#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

# define GREEN "\x1B[1;32m"
# define YELLOW "\x1B[1;33m"
# define RESET "\x1B[0;37m"
# define BLUE  "\033[36m"
# define RED    "\033[0;31m"

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack(){}
		virtual ~MutantStack(){}
		// virtual deconstructor
		// -> proper cleanup of resources when derived classes are deleted

		typedef typename std::stack<T>::container_type::iterator iterator;
		// here we define iterator, type of underlying container "std::stack" with type "T"

		iterator end()
		{
			return std::stack<T>::c.end();
		}
		iterator begin()
		{
			return std::stack<T>::c.begin();
		}
		// c is a member of the std::stack class that provides access to the underlying container
};

#endif
