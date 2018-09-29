#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
	fixed_point = f.fixed_point;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator = (Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f)
	{
		fixed_point = f.fixed_point;
	}
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}
