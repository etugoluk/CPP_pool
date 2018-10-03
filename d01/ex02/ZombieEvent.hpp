// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:06:23 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:06:24 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{
	std::string z_type;
public:
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	void randomChump();
};

#endif