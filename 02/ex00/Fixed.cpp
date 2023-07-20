#include "Fixed.hpp"

// A default constructor that initializes the fixed-point number value to 0
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

// A copy assignment operator overload
// The copy assignment operator is used to assign 
// one object of the class to another object of the same class
Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	// makes sure that we're not assigning the same pointer to itself
	if (this != &other)
	{
		// assigning value fixedPoint of another object (but from the same class)
		// to the private member value fixedPoint in our Fixed class
		this->fixedPoint = other.getRawBits();
	}
	// returning reference of this, so assignments can get chained
	return (*this);
}


Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// A copy constructor
// The copy constructor is used to create a new object by making a copy 
// of an existing object. It is called when a new object is being initialized 
// with another object of the same class
Fixed::Fixed(const Fixed& copyFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = copyFixed.fixedPoint;
}

// returns the raw value of the fixedPoint value
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

// sets the raw value of the fixedPoint number
void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}