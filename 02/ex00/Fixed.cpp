#include "Fixed.hpp"

// A default constructor that initializes the fixed-point number value to 0
Fixed::Fixed(void)
{
	std::cout << "DDefault constructor called" << std::endl;
	this->fixedPoint = 0;
}

// A copy assignment operator overload
// HERE


// A destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// A copy constructor
Fixed::Fixed(const Fixed& copyFixed)
{
	std::cout << "Copy constructor called" << std::endl;
}

// returns the raw value of the fixedPoint value
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBit);
}

// sets the raw value of the fixedPoint number
void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}