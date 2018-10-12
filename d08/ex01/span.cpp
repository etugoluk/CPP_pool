// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 16:18:54 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/11 16:18:54 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

Span::Span() : n(0) {
	v.reserve(0);
}

Span::Span(unsigned int n) : n(n) {
	v.reserve(n);
}

Span::Span(Span const &s) {
	*this = s;
}

Span::~Span() {}

Span & Span::operator=(Span const &s) {
	if (this != &s)
	{
		n = s.getSize();
		v.reserve(n);
		v = s.v;
	}
	return *this;
}

int Span::operator[](unsigned int i) const {
	if (i > v.size())
		throw std::exception();
	return v[i];
}

int & Span::operator[](unsigned int i) {
	if (i > v.size())
		throw std::exception();
	return v[i];
}

int Span::getSize() const {
	return n;
}

std::vector<int> Span::getVector() const {
	return v;
}

void Span::addNumber(int value) {
	if (n == v.size())
		throw Span::NumberExistsException();
	v.push_back(value);
}

int Span::abs(int a)
{
	return (a > 0 ? a : -a);
}

int Span::shortestSpan() {
	if (v.size() < 2)
		throw Span::NoSpanException();
	int distance = abs(v[1] - v[0]);
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		for (unsigned int j = i + 1; j < v.size(); ++j)
		{
			if (abs(v[i] - v[j]) < distance)
				distance = abs(v[i] - v[j]);
		}
	}
	return distance;
}

int Span::longestSpan() {
	if (v.size() < 2)
		throw Span::NoSpanException();
	return (*std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end()));
}

Span::NumberExistsException::NumberExistsException() {}

Span::NumberExistsException::NumberExistsException(Span::NumberExistsException const & g) {
	*this = g;
}

Span::NumberExistsException::~NumberExistsException() throw() {}

Span::NumberExistsException & Span::NumberExistsException::operator=(Span::NumberExistsException const & g) {
	if (this != &g)
		return *this;
	return *this;
}

const char    *Span::NumberExistsException::what() const throw() {
	return ("No space for storing integers");
}

Span::NoSpanException::NoSpanException() {}

Span::NoSpanException::NoSpanException(Span::NoSpanException const & g) {
	*this = g;
}

Span::NoSpanException::~NoSpanException() throw() {}

Span::NoSpanException & Span::NoSpanException::operator=(Span::NoSpanException const & g) {
	if (this != &g)
		return *this;
	return *this;
}

const char    *Span::NoSpanException::what() const throw() {
	return ("Not enough integers to count span");
}

