#ifndef FIXED_HPP
#define FIXED_HPP
// #pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixedPoint;
		static const int fracBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copyFixed); // copy constructor
		Fixed(const int &n);
		Fixed(const float &n);
		int getRawBits() const;
		void	setRawBits( int const raw );
		float toFloat(void) const;
		int toInt( void ) const;
		Fixed &operator=(const Fixed&);
};
std::ostream& operator<<(std::ostream& out,  Fixed const &obj);

#endif
