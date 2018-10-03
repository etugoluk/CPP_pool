// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:30:05 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:30:06 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{

}

void HumanB::setWeapon(Weapon &w)
{
	this->w_b = &w;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->w_b->getType() << std::endl;
}
