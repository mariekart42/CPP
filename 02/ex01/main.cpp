#include "Fixed.hpp"

int Fixed::getFixedPoint()
{
	return (this->fixedPoint);
}

int main(void) 
{
	Fixed a;
	// Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );
	std::cout << "	1 TEST: fixedPoint: " << a.getFixedPoint()<<std::endl;

	a = Fixed(69.69f);
	std::cout << "	2 TEST: fixedPoint: " << a.getFixedPoint()<<std::endl;

	std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}