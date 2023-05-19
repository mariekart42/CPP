#include "Fixed.hpp"

// copy constructor:
Fixed::Fixed(const Fixed& copyFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->fixedPoint = copyFixed.fixedPoint;
	*this = copyFixed;
}

Fixed::Fixed(void)
	:fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int n)
	:fixedPoint(n<<fracBits)
{
	std::cout << "Int constructor called" << std::endl;
	// this->fixedPoint = n;
}
Fixed::Fixed(const float n)
	:fixedPoint(roundf(n * (1 <<fracBits)))
{
	std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// // converts the fixed-point value to a floating-point value
// float Fixed::Fixed(void) const
// {

// }

// converts the fixed-point value to an integer value
int Fixed::toInt( void ) const
{
	return (this->fixedPoint >> fracBits);
}

int Fixed::getFracBits() const
{
	std::cout << "getFracBits member function called." << std::endl;
	return (fixedPoint);
}

// = operator overload
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	fixedPoint = other.getFracBits();
	return(*this);
}