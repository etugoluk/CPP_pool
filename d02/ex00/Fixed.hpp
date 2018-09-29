#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &f);
	~Fixed();

	Fixed & operator = (Fixed const &f);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int fixed_point;
	static const int fractional_bits = 8;
};

#endif