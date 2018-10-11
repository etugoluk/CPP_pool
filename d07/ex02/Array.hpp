// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 21:16:29 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/10 21:16:29 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> 
class Array {
	T*	arr;
	size_t size;
public:
	Array() : arr(NULL), size(0) {}
	Array(unsigned int n) : arr(new T[n]), size(n) {}
	Array(Array const &a) { *this = a; }
	~Array() {delete [] arr;}

	Array & operator=(Array const &a) {
		if (this != &a)
		{
			size = a.getSize();
			arr = new T[size];
			for (size_t i = 0; i < size; ++i)
			{
				arr[i] = a[i];
			}
		}
		return *this;
	}
	T operator[](size_t i) const {
		if (i > size)
			throw std::exception();
		return arr[i];
	}
	T & operator[](size_t i) {
		if (i > size)
			throw std::exception();
		return arr[i];
	}

	int getSize() const {return size;}
};

#endif