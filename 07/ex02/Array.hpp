#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
# include <exception>

# define  GREEN "\x1B[1;32m"
# define RED    "\033[0;31m"
# define YEL    "\033[0;33m"
# define  RESET "\x1B[0;37m"

template<typename T>
class Array
{
    private:
        T *_elements;
        unsigned int _len;

    public:
        Array();
        Array(unsigned int);
        Array(const Array &);
        ~Array();

        T &operator[](size_t i) const;
        unsigned int size() const;
        Array<T> &operator=(const Array &);

};

#include "Array.tpp"


#endif