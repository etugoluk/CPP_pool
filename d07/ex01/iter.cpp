// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 19:03:56 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/10 19:03:56 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <typename T, typename l>
void iter(T *arr, l length, void function(T &value)) {
	for (int i = 0; i < length; ++i)
	{
		function(arr[i]);
	}
}

template <typename T>
void add(T &value) {
	++value;
}

template <typename T>
void sub(T &value) {
	--value;
}

int main() {

	int arr[5] = {1, 2, 3, 4, 5};
	std::cout << "INPUT" << std::endl; 
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
	iter(arr, 5, add);
	std::cout << "ADD FUNCTION" << std::endl; 
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
	iter(arr, 5, sub);
	std::cout << "SUB FUNCTION" << std::endl; 
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << std::endl;
	}

	char chars[5] = {'a', 'b', 'c', 'd', 'e'};
	std::cout << "INPUT" << std::endl; 
	for (int i = 0; i < 5; ++i)
	{
		std::cout << chars[i] << std::endl;
	}
	iter(chars, 5, add);
	std::cout << "ADD FUNCTION" << std::endl; 
	for (int i = 0; i < 5; ++i)
	{
		std::cout << chars[i] << std::endl;
	}
	iter(chars, 5, sub);
	std::cout << "SUB FUNCTION" << std::endl; 
	for (int i = 0; i < 5; ++i)
	{
		std::cout << chars[i] << std::endl;
	}
	return (0);
}