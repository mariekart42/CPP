#ifndef FIXED_HPP
#define FIXED_HPP
#pragma once
#include <iostream>

class Fixed
{
	private:
		int fixedPoint;
		static const int rawBit = 8;
	
	public:
		Fixed(void);
		Fixed(const Fixed& copyFixed);

		Fixed &operator=(const Fixed&);

		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
#endif