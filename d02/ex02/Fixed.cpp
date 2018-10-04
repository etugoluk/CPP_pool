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
}

Fixed::Fixed(const int i) {
	fixed_point = i << fractional_bits;
}

Fixed::Fixed(const float i) {
	fixed_point = roundf(i * (1 << fractional_bits));
}

Fixed::Fixed(Fixed const &f) {
	*this = f;
}

Fixed::~Fixed() {}

Fixed & Fixed::operator = (Fixed const &f) {
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

bool Fixed::operator > (Fixed const &f) {
	return (this->fixed_point > f.getRawBits() ? 1 : 0);
}

bool Fixed::operator < (Fixed const &f) {
	return (this->fixed_point < f.getRawBits() ? 1 : 0);
}

bool Fixed::operator >= (Fixed const &f) {
	return (this->fixed_point >= f.getRawBits() ? 1 : 0);
}

bool Fixed::operator <= (Fixed const &f) {
	return (this->fixed_point <= f.getRawBits() ? 1 : 0);
}

bool Fixed::operator == (Fixed const &f) {
	return (this->fixed_point == f.getRawBits() ? 1 : 0);
}

bool Fixed::operator != (Fixed const &f) {
	return (this->fixed_point != f.getRawBits() ? 1 : 0);
}

Fixed Fixed::operator + (Fixed const &f) {
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator - (Fixed const &f) {
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator * (Fixed const &f) {
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator / (Fixed const &f) {
	if (f.getRawBits() == 0) {
		std::cout << "Division by zero. Empty constructor will be returned." << std::endl;
		return (Fixed());
	}
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed & Fixed::operator++() {
	this->fixed_point++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed & Fixed::operator--() {
	this->fixed_point--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed const & Fixed::min(Fixed const &f1, Fixed const &f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

Fixed const & Fixed::max(Fixed const &f1, Fixed const &f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}

Fixed const & Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

Fixed const & Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}
