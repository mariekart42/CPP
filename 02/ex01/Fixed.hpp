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
		Fixed(const int &n);
		Fixed(const float &n);
		~Fixed();
		int getRawBits() const;
		void	setRawBits( int const raw );
		float toFloat(void) const;


		int getFixedPoint() const;
		Fixed &operator=(const Fixed&);
		int toInt( void ) const;
		// int getFracBits() const;
};
std::ostream& operator<<(std::ostream& out,  Fixed const &obj);

#endif
