#include "Fixed.hpp"

// ---------- DE-/CONSTRUCTORS ----------
Fixed::Fixed(void)
	:_fixedPoint(0)
{}
Fixed::Fixed(const int &n)
	:_fixedPoint(n<<_fracBits)
{}
Fixed::Fixed(const float &n)
	:_fixedPoint(roundf(n * (1 <<_fracBits)))
{}
Fixed::Fixed(const Fixed& copyFixed)
{
	*this = copyFixed;
}

Fixed::~Fixed() {}


// ---------- OPERATORS ----------
Fixed	&Fixed::operator=(const Fixed &other)
{
	_fixedPoint = other._fixedPoint;
	return (*this);
}
std::ostream &operator<<(std::ostream& out, const Fixed& obj)
{
	return (out << obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed tmp(toFloat() * other.toFloat());
	return (tmp);
}
Fixed Fixed::operator/(Fixed const &other) const
{
	Fixed tmp(toFloat() / other.toFloat());
	return (tmp);
}
Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed tmp(toFloat() - other.toFloat());
	return (tmp);
}
Fixed Fixed::operator+(Fixed const &other) const
{
	Fixed tmp(toFloat() + other.toFloat());
	return (tmp);
}

bool Fixed::operator>(Fixed const &other) const
{
	return (_fixedPoint > other._fixedPoint);
}
bool Fixed::operator<(Fixed const &other) const
{
	return (_fixedPoint < other._fixedPoint);
}
bool Fixed::operator<=(Fixed const &other) const
{
	return (_fixedPoint <= other._fixedPoint);
}
bool Fixed::operator>=(Fixed const &other) const
{
	return (_fixedPoint >= other._fixedPoint);
}
bool Fixed::operator==(Fixed const &other) const
{
	return (_fixedPoint == other._fixedPoint);
}
bool Fixed::operator!=(Fixed const &other) const
{
	return (_fixedPoint != other._fixedPoint);
}

// ++x
Fixed Fixed::operator++(void)
{
	_fixedPoint++;
	return (*this);
}
// x++		-> gets increamentet but current value stays the same
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_fixedPoint++;
	return (tmp);
}
// --x
Fixed Fixed::operator--(void)
{
	_fixedPoint--;
	return (*this);
}
// x--		-> gets decreamentet but current value stays the same
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_fixedPoint--;
	return (tmp);
}


// ---------- MIN | MAX ----------
Fixed &Fixed::min(Fixed &uno, Fixed &dos)
{
	return (uno.getRawBits() < dos.getRawBits() ? uno : dos);
}
Fixed &Fixed::max(Fixed &uno, Fixed &dos)
{
	return (uno.getRawBits() > dos.getRawBits() ? uno : dos);
}
const Fixed &Fixed::min(Fixed const &uno, Fixed const &dos)
{
	return (uno.getRawBits() < dos.getRawBits() ? uno : dos);
}
const Fixed &Fixed::max(Fixed const &uno, Fixed const &dos)
{
	return (uno.getRawBits() > dos.getRawBits() ? uno : dos);
}


// ---------- ... ----------
float Fixed::toFloat() const
{
	return (float)_fixedPoint / (float)(1 << _fracBits);
}
int	Fixed::toInt() const
{
	return (int)(_fixedPoint >> _fracBits);
}


int Fixed::getRawBits() const
{
	return (_fixedPoint);
}
void Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}