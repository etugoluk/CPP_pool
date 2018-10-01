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

	bool operator > (Fixed const &f);
	bool operator < (Fixed const &f);
	bool operator >= (Fixed const &f);
	bool operator <= (Fixed const &f);
	bool operator == (Fixed const &f);
	bool operator != (Fixed const &f);


	Fixed operator + (Fixed const &f);
	Fixed operator - (Fixed const &f);
	Fixed operator * (Fixed const &f);
	Fixed operator / (Fixed const &f);

	Fixed & operator++(); //prefix
	Fixed operator++(int); //postfix
	Fixed & operator--(); //prefix
	Fixed operator--(int); //postfix

	static Fixed const & min(Fixed const &f1, Fixed const &f2);
	static Fixed const & max(Fixed const &f1, Fixed const &f2);

private:
	int fixed_point;
	static const int fractional_bits;
};

std::ostream& operator << (std::ostream &os, Fixed const &f);

#endif