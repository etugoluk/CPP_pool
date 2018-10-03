// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:30:00 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:30:01 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	Weapon *w_b;
	std::string name;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &w);
	void attack();
};

#endif