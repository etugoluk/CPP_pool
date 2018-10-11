// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 14:07:17 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/11 14:07:18 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <array>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main() {
	std::array<int, 5> a = {{1, 2, 3, 4, 5}};

	std::cout << "ARRAY OF INTEGERS" << std::endl;
	try {
		std::cout << "Place of element in container : " << easyfind(a, 3) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "element not found in container" << std::endl;
	}

	try {
		std::cout <<  "Place of element in container : " << easyfind(a, 10) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "element not found in container" << std::endl;
	}
	
	std::list<double> l ;

	for (double i = 0; i < 5; ++i)
	{
		l.push_back(i / 2);
	}

	std::cout << "LIST OF DOUBLES" << std::endl;
	try {
		std::cout << "Place of element in container : " << easyfind(l, 4 / 2) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "element not found in container" << std::endl;
	}

	try {
		std::cout <<  "Place of element in container : " << easyfind(l, 10) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "element not found in container" << std::endl;
	}

	std::vector<char> v ;

	for (double i = 0; i < 5; ++i)
	{
		v.push_back(i + 65);
	}
	std::cout << "VECTOR OF CHARS" << std::endl;
	try {
		std::cout << "Place of element in container : " << easyfind(v, 66) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "element not found in container" << std::endl;
	}

	try {
		std::cout <<  "Place of element in container : " << easyfind(v, 10) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "element not found in container" << std::endl;
	}
	return (0);
}