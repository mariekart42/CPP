#include "Fixed.hpp"

Fixed::Fixed(const int n)
{
	this->fixedPoint = n << fracBits;
}
Fixed::~Fixed(){}

// // converts the fixed-point value to a floating-point value
// float Fixed::Fixed(void) const
// {

// }

// converts the fixed-point value to an integer value
int Fixed::toInt( void ) const
{
	return (this->fixedPoint >> fracBits);
}