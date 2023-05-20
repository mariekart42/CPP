#include "Fixed.hpp"

// ---------- DE-/CONSTRUCTORS ----------
Fixed::Fixed(void)
	:Fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int &n)
	:fixedPoint(n<<fracBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float &n)
	:fixedPoint(roundf(n * (1 <<fracBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed& copyFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyFixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}



int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	fixedPoint = raw;
}



// converts the fixed-point value to an integer value
int Fixed::toInt() const
{
	return (int)(fixedPoint >> fracBits);
}

float Fixed::toFloat() const
{
	return (float)fixedPoint / (float)(1 << fracBits);
}


// ---------- OPERATORS ----------
// = operator overload
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = other.fixedPoint;
	return(*this);
}

std::ostream &operator<<(std::ostream& out, const Fixed& obj)
{
	return (out << obj.toFloat());
}
