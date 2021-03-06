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
	static const int fractional_bits;
};

#endif