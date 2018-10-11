// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 16:19:00 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/11 16:19:01 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {
	int 		 *arr;
	unsigned int counter;
	unsigned int n;
public:
	Span();
	Span(unsigned int n);
	Span(Span const &s);
	~Span();

	Span & operator=(Span const &s);

	int operator[](unsigned int i) const;
	int & operator[](unsigned int i);

	int getCounter() const;
	int getSize() const;
	void addNumber(int value);
	int shortestSpan();
	int longestSpan();

	class NumberExistsException: public std::exception {
	public:
		NumberExistsException();
		NumberExistsException(Span::NumberExistsException const & g);
		~NumberExistsException() throw ();
		
		Span::NumberExistsException & operator=(Span::NumberExistsException const & g);

		virtual const char    *what() const throw();
	};

	class NoSpanException: public std::exception {
	public:
		NoSpanException();
		NoSpanException(Span::NoSpanException const & g);
		~NoSpanException() throw ();
		
		Span::NoSpanException & operator=(Span::NoSpanException const & g);

		virtual const char    *what() const throw();
	};
};

#endif