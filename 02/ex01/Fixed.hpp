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
		Fixed(const Fixed& copyFixed); // copy constructor
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		Fixed &operator=(const Fixed&);
		float toFloat(void) const;
		int toInt( void ) const;
		int getFixedPoint();
		int getFracBits() const;
};

#endif
