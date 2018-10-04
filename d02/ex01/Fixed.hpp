// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 18:42:26 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/04 18:42:27 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float i);
	Fixed(Fixed const &f);
	~Fixed();

	Fixed& operator=(Fixed const &f);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int fixed_point;
	static const int fractional_bits;
};

std::ostream& operator << (std::ostream &os, Fixed const &f);

#endif