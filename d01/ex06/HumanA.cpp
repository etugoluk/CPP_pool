// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:29:49 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:29:50 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w_a): w_a(&w_a), name(name)
{
	
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->w_a->getType() << std::endl;
}
