// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:30:19 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:30:19 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : _type(type)
{
}

std::string const &Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string const &type)
{
	this->_type = type;
}
