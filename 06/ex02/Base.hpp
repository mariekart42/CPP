#ifndef BASE_HPP
#define BASE_HPP

# define GREEN "\e[1;32m"
# define YELLOW "\e[1;33m"
# define BLUE  "\033[36m"
# define RED    "\033[0;31m"
# define  RESET "\x1B[0m"
#include <iostream>

class Base
{
    public:
        Base();
        virtual ~Base();
};

#endif
