#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				_fixedPoint;
		static const int	_fracBits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const int &n);
		Fixed(const float &n);
		Fixed(const Fixed& copyFixed);

		Fixed	&operator=(const Fixed&);
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator+(Fixed const &other) const;
		bool	operator>(Fixed const &other) const;
		bool	operator<(Fixed const &other) const;
		bool	operator>=(Fixed const &other) const;
		bool	operator<=(Fixed const &other) const;
		bool	operator==(Fixed const &other) const;
		bool	operator!=(Fixed const &other) const;
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static Fixed &min(Fixed &uno, Fixed &dos);
		static Fixed &max(Fixed &uno, Fixed &dos);
		static const Fixed &min(Fixed const &uno, Fixed const &dos);
		static const Fixed &max(Fixed const &uno, Fixed const &dos);

		float	toFloat() const;
		int		toInt(void) const;

		int		getRawBits() const;
		void	setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& out,  Fixed const &obj);
#endif