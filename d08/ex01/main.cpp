// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 16:19:09 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/11 16:19:10 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int main() {
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try {
		sp.addNumber(15);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span cpy = sp;

	std::cout << cpy.shortestSpan() << std::endl;
	std::cout << cpy.longestSpan() << std::endl;

	try {
		Span small = Span();
		std::cout << small.shortestSpan() << std::endl;
		std::cout << small.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span big = Span(10000);

	try {
		for (int i = 0; i < 10000; ++i)
		{
			big.addNumber(i);
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << big.shortestSpan() << std::endl;
	std::cout << big.longestSpan() << std::endl;

	return (0);
}