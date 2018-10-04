// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 18:42:15 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/04 18:42:16 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() {
	fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {
	fixed_point = i << fractional_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i) {
	fixed_point = roundf(i * (1 << fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator = (Fixed const &f) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f) {
		fixed_point = f.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits( void ) const {
	return (fixed_point);
}

void Fixed::setRawBits( int const raw ) {
	fixed_point = raw;
}

float Fixed::toFloat( void ) const {
	return (float)fixed_point / (1 << fractional_bits);
}

int Fixed::toInt( void ) const {
	return fixed_point / (1 << fractional_bits);
}

std::ostream& operator << (std::ostream &os, Fixed const &f) {
	os << f.toFloat();
	return os;
}
