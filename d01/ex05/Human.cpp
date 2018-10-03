// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:19:17 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:19:17 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include "Human.hpp"

Brain const &Human::getBrain() const
{
	return (this->_brain);
}

std::string Human::identify() const
{
	return (this->_brain.identify());
}
