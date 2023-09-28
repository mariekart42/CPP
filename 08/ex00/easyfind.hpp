#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# define GRN "\x1B[1;32m"
# define YEL "\x1B[1;33m"
# define BLU "\033[36m"
# define RED "\033[0;31m"
# define RESET "\x1B[0;37m"



#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <deque>
#include <list>

class NotFound : public std::exception
{
    virtual const char *what() const throw()
    {
        return(RED"No matching number found"RESET);
    }
};

template<typename T>
typename T::iterator easyfind(T &lol, int val)
{
    typename T::iterator it = find(lol.begin(), lol.end(), val);
    if (it == lol.end())
        throw NotFound();
    return it;
}

#endif
