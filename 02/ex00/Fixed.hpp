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
		//A copy assignment operator overload
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};