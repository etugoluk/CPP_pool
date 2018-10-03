// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:02:45 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:02:46 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony() :name("noname"), age(0)
{
	std::cout << "Default Constructor" << std::endl;
}

Pony::Pony(std::string name, int age) :name(name), age(age)
{
	std::cout << "Constructor of Pony with name: " << this->name <<
	", age: " << this->age << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destructor of Pony with name: " << this->name <<
	", age: " << this->age << std::endl;
}
