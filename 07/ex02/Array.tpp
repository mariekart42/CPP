#include "Array.hpp"

// default constructor
template<typename T>
Array<T>::Array():
        _elements(NULL), _len(0)
{

}

template<typename T>
Array<T>::Array(unsigned int len):
        _elements(NULL), _len(len)
{
    _elements = new T[_len];
    std::cout << "Constructor: created array of len" << std::endl;
}

template<class T>
Array<T>::Array(const Array &other):
    _len()
{
    *this = other;
}



template<typename T>
Array<T>::~Array()
{
    if (_elements)
    {
        delete[] _elements;
        std::cout << YEL"\ndefault Deconstructor"RESET << std::endl;
    }
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
    if (this == &src)
        return (*this);
    if (_elements)
    {
        delete[] _elements;
        _elements = NULL;
    }
    _len = src.size();
    _elements = new T[_len];
    for (unsigned int i = 0; i < _len; i++)
        _elements[i] = src._elements[i];
    return (*this);
}

template<class T>
T &Array<T>::operator[](size_t i) const
{
    if(i < _len)
        return _elements[i];
    else
        throw std::out_of_range(RED"operator [] goes out of range -> EXCEPTION\n"RESET);
}

template<class T>
unsigned int Array<T>::size() const
{
    return _len;
}