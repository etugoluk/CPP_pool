#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float i);
	Fixed(Fixed const &f);
	~Fixed();

	Fixed & operator = (Fixed const &f);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int fixed_point;
	static const int fractional_bits = 8;
};

#endif