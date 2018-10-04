// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 18:42:36 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/04 18:42:38 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "Additional tests:" << std::endl;
	 a = 2;
	 Fixed c(0);
	 std::cout << "a = " << a << std::endl;
	 std::cout << "c = " << c << std::endl;
	 std::cout << "a + c = " << a + c << std::endl;
	 std::cout << "a - c = " << a - c << std::endl;
	 std::cout << "c - a = " << c - a << std::endl;
	 std::cout << "a * c = " << a * c << std::endl;
	 std::cout << "a / c = " << a / c << std::endl;
	 
	 (a > c) ? std::cout << "a > c " << std::endl : std::cout << "a < c " << std::endl;
	 (a >= c) ? std::cout << "a >= c " << std::endl : std::cout << "a =< c " << std::endl;
	 (a < c) ? std::cout << "a < c " << std::endl : std::cout << "a > c " << std::endl;
	 (a <= c) ? std::cout << "a <= c " << std::endl : std::cout << "a >= c " << std::endl;
	 (a == c) ? std::cout << "a == c " << std::endl : std::cout << "a != c " << std::endl;
	 (a != c) ? std::cout << "a != c " << std::endl : std::cout << "a != c " << std::endl;

	return (0);
}