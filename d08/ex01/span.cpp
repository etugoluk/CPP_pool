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

Span::Span() : arr(NULL), counter(0), n(0) {}

Span::Span(unsigned int n) : arr(new int[n]), counter(0), n(n) {}

Span::Span(Span const &s) {
	*this = s;
}

Span::~Span() {
	delete [] arr;
}

Span & Span::operator=(Span const &s) {
	if (this != &s)
	{
		n = s.getSize();
		counter = s.getCounter();
		arr = new int[n];
		for (unsigned int i = 0; i < n; ++i)
		{
			arr[i] = s[i];
		}
	}
	return *this;
}

int Span::operator[](unsigned int i) const {
	if (i > counter)
		throw std::exception();
	return arr[i];
}

int & Span::operator[](unsigned int i) {
	if (i > counter)
		throw std::exception();
	return arr[i];
}

int Span::getSize() const {
	return n;
}

int Span::getCounter() const {
	return counter;
}

void Span::addNumber(int value) {
	if (counter >= n)
		throw Span::NumberExistsException();
	arr[counter] = value;
	counter++;
}

unsigned int abs(int a, int b)
{
	return (a > b ? a - b : b - a);
}

int min(int *arr, int size)
{
	int min = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return (min);
}

int max(int *arr, int size)
{
	int max = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return (max);
}

int Span::shortestSpan() {
	if (counter < 2)
		throw Span::NoSpanException();
	int distance = abs(arr[1] - arr[0]);
	for (unsigned int i = 0; i < counter; ++i)
	{
		for (unsigned int j = i + 1; j < counter; ++j)
		{
			if (abs(arr[i] - arr[j]) < distance)
				distance = abs(arr[i] - arr[j]);
		}
	}
	return distance;
}

int Span::longestSpan() {
	if (counter < 2)
		throw Span::NoSpanException();
	return (max(arr, n) - min(arr, n));
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

