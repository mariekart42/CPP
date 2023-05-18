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
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		float toFloat(void) const;
		int toInt( void ) const;
};

#endif
