// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:30:23 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:30:24 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string _type;
public:
	Weapon(std::string const &type);
	std::string const &getType() const;
	void setType(std::string const &type);
};

#endif