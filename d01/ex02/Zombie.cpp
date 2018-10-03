// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:05:46 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:05:46 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : type(type), name(name)
{
	std::cout << "Zombie is created with name: " <<this->name << " and type: " << this->type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie is destroyed with name: " <<this->name << " and type: " << this->type << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " (" << this->type << ") Braiiiiiiinnnssss..." << std::endl;
}
